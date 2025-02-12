from paraview.simple import *

path_input = '/Users/linghuiyang/Desktop/flows'
path_output = path_input + '/csv'

for i in range(1, 6):
    for j in range(1, 6):
        case_name = f'flow-{i}-{j}'
        file_input = f'{path_input}/{case_name}/results.foam'
        file_output = f'{path_output}/snap_{i}_{j}.csv'

        spreadSheetView = CreateView('SpreadSheetView')
        spreadSheetView.ColumnToSort = ''
        spreadSheetView.BlockSize = 1024
        layout = GetLayoutByName("Layout")
        AssignViewToLayout(view=spreadSheetView, layout=layout, hint=0)

        reader = OpenFOAMReader(FileName=file_input)
        SetActiveSource(reader)

        animationScene = GetAnimationScene()
        animationScene.UpdateAnimationUsingDataTimeSteps()
        animationScene.GoToLast()

        Show(reader, spreadSheetView, 'SpreadSheetRepresentation')

        spreadSheetView.HiddenColumnLabels = ['c', 'Block Number', 'Block Name', 'Point ID', 'p', 'Points_Magnitude', 'source', 'U_Magnitude']
        spreadSheetView.ColumnToSort = 'Points_2'
        spreadSheetView.InvertOrder = 0

        ExportView(file_output, view=spreadSheetView)

print("Processing complete for all cases.")
