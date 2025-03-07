from paraview.simple import *

path_input = '/Users/linghuiyang/Documents/5_cgan_data/pe_100/flow-1-2'
path_output = path_input + '/csv'

spreadSheetView = CreateView('SpreadSheetView')
spreadSheetView.ColumnToSort = ''
spreadSheetView.BlockSize = 1024
layout = GetLayoutByName("Layout")
AssignViewToLayout(view=spreadSheetView, layout=layout, hint=0)

for i in range(1, 18):
    for j in range(1, 12):
        case_name = f'case-{i}-{j}'
        file_input = f'{path_input}/{case_name}/results.foam'
        file_output = f'{path_output}/snap_{i}_{j}.csv'

        reader = OpenFOAMReader(FileName=file_input)
        SetActiveSource(reader)

        animationScene = GetAnimationScene()
        animationScene.UpdateAnimationUsingDataTimeSteps()
        animationScene.GoToLast()

        Show(reader, spreadSheetView, 'SpreadSheetRepresentation')

        spreadSheetView.HiddenColumnLabels = ['Block Number', 'Block Name', 'Point ID', 'p', 'Points_Magnitude', 'source', 'U', 'U_Magnitude']
        spreadSheetView.ColumnToSort = 'Points_2'
        spreadSheetView.InvertOrder = 0

        ExportView(file_output, view=spreadSheetView)

print("Processing complete for all cases.")
