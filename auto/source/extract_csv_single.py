from paraview.simple import *

file_input = '/Users/linghuiyang/Desktop/case-3-3/results.foam'
file_output = '/Users/linghuiyang/Desktop/case-3-3/snap.csv'

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

spreadSheetView.HiddenColumnLabels = ['Block Number', 'Block Name', 'Point ID', 'p', 'Points_Magnitude', 'source', 'U', 'U_Magnitude']
spreadSheetView.ColumnToSort = 'Points_2'
spreadSheetView.InvertOrder = 0

ExportView(file_output, view=spreadSheetView)
