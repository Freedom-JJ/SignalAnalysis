﻿#include "MainWindowPrivate.h"
#include "mainwindow.h"
#include <QDebug>
MainWindowPrivate::MainWindowPrivate(MainWindow *p)
    : Parent(p)
    , menuFigureWindow(nullptr)
{
}


void MainWindowPrivate::init()
{
    setupUi(this->Parent);
}


void MainWindowPrivate::setupUi(MainWindow *mainWinowPtr)
{
    if (mainWinowPtr->objectName().isEmpty()) {
        mainWinowPtr->setObjectName(QStringLiteral("MainWindow"));
    }
    mainWinowPtr->setWindowIcon(QIcon(":/windowIcons/icons/windowIcon/figureWindow.svg"));
    mainWinowPtr->showMaximized();
    menuBar = mainWinowPtr->ribbonBar();
    menuBar->setObjectName(QStringLiteral("menuBar"));
    menuBar->setRibbonStyle(SARibbonBar::WpsLiteStyle);
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);

    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(mainWinowPtr->sizePolicy().hasHeightForWidth());
    mainWinowPtr->setSizePolicy(sizePolicy);
    mainWinowPtr->setAcceptDrops(true);
    mainWinowPtr->setAutoFillBackground(false);
    //mainWinowPtr->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    //! 1 action 创建
    actionOpen1 = new QAction(mainWinowPtr);
    actionOpen1->setObjectName(QStringLiteral("打开项目"));
    actionOpen1->setIcon(QIcon(":/icons/icons/open.png"));

    actionNew = new QAction(mainWinowPtr);
    actionNew->setObjectName(QStringLiteral("新建项目"));
    actionNew->setIcon(QIcon(":/icons/icons/open.png"));

    actionProduct = new QAction(mainWinowPtr);
    actionProduct->setObjectName(QStringLiteral("新建项目"));
    actionProduct->setIcon(QIcon(":/icons/icons/open.png"));


    actionSet = new QAction(mainWinowPtr);
    actionSet->setObjectName(QStringLiteral("项目设置"));
    actionSet->setIcon(QIcon(":/icons/icons/open.png"));

    actionCleanZero = new QAction(mainWinowPtr);
    actionCleanZero->setObjectName(QStringLiteral("actionCleanZero"));
    actionCleanZero->setCheckable(true);
    actionCleanZero->setIcon(QIcon(":/icons/icons/selectionRegionDataMove.png"));

    actionBalance = new QAction(mainWinowPtr);
    actionBalance->setObjectName(QStringLiteral("actionBalance"));
    actionBalance->setCheckable(true);
    actionBalance->setIcon(QIcon(":/icons/icons/selectionRegionDataMove.png"));

    actionStartCapture = new QAction(mainWinowPtr);//开始采集
    actionStartCapture->setObjectName(QStringLiteral("actionStartCapture"));
    actionStartCapture->setCheckable(true);
    actionStartCapture->setIcon(QIcon(":/icons/icons/selectionRegionDataMove.png"));






    actionSuspendCapture = new QAction(mainWinowPtr);
    actionSuspendCapture->setObjectName(QStringLiteral("actionSuspendCapture"));
    actionSuspendCapture->setCheckable(true);
    actionSuspendCapture->setIcon(QIcon(":/icons/icons/selectionRegionDataMove.png"));

    actionStopCapture = new QAction(mainWinowPtr);
    actionStopCapture->setObjectName(QStringLiteral("actionStopCapture"));
    actionStopCapture->setCheckable(true);
    actionStopCapture->setIcon(QIcon(":/icons/icons/selectionRegionDataMove.png"));

    actionYDataPicker = new QAction(mainWinowPtr);
    actionYDataPicker->setObjectName(QStringLiteral("actionYDataPicker"));
    actionYDataPicker->setIcon(QIcon(":/figureSet/icons/figureSet/yDataPicker.png"));

    actionXYDataPicker = new QAction(mainWinowPtr);
    actionXYDataPicker->setObjectName(QStringLiteral("actionXYDataPicker"));
    actionXYDataPicker->setIcon(QIcon(":/figureSet/icons/figureSet/xyDataPicker.png"));

    actionXDataPicker = new QAction(mainWinowPtr);
    actionXDataPicker->setObjectName(QStringLiteral("actionXDataPicker"));
    actionXDataPicker->setIcon(QIcon(":/figureSet/icons/figureSet/xyDataPicker.png"));

    actionhorizontalLarge = new QAction(mainWinowPtr);
    actionhorizontalLarge->setObjectName(QStringLiteral("actionhorizontalLarge"));
    actionhorizontalLarge->setIcon(QIcon(":/figureSet/icons/figureSet/ShowLegend.png"));

    actionhorizontalSmall = new QAction(mainWinowPtr);
    actionhorizontalSmall->setObjectName(QStringLiteral("actionhorizontalSmall"));
    actionhorizontalSmall->setIcon(QIcon(":/figureSet/icons/figureSet/ShowLegend.png"));

    actionverticalLarge = new QAction(mainWinowPtr);
    actionverticalLarge->setObjectName(QStringLiteral("actionverticalLarge"));
    actionverticalLarge->setIcon(QIcon(":/figureSet/icons/figureSet/ShowLegend.png"));

    actionverticalSmall = new QAction(mainWinowPtr);
    actionverticalSmall->setObjectName(QStringLiteral("actionverticalSmall"));
    actionverticalSmall->setIcon(QIcon(":/figureSet/icons/figureSet/ShowLegend.png"));

    actionSinglecursor = new QAction(mainWinowPtr);
    actionSinglecursor->setObjectName(QStringLiteral("actionSinglecursor"));
    actionSinglecursor->setIcon(QIcon(":/figureSet/icons/figureSet/ShowLegend.png"));

    actionNocursor = new QAction(mainWinowPtr);
    actionNocursor->setObjectName(QStringLiteral("actionNocursor"));
    actionNocursor->setIcon(QIcon(":/figureSet/icons/figureSet/ShowLegend.png"));

    actionPeakcursor = new QAction(mainWinowPtr);
    actionPeakcursor->setObjectName(QStringLiteral("actionPeakcursor"));
    actionPeakcursor->setIcon(QIcon(":/figureSet/icons/figureSet/ShowLegend.png"));

    actionAutomaticscale = new QAction(mainWinowPtr);
    actionAutomaticscale->setObjectName(QStringLiteral("actionAutomaticscale"));
    actionAutomaticscale->setIcon(QIcon(":/figureSet/icons/figureSet/ShowLegend.png"));

    actionDefaultscale = new QAction(mainWinowPtr);
    actionDefaultscale->setObjectName(QStringLiteral("actionDefaultscale"));
    actionDefaultscale->setIcon(QIcon(":/figureSet/icons/figureSet/ShowLegend.png"));

    actionStopPlayBack = new QAction(mainWinowPtr);
    actionStopPlayBack->setObjectName(QStringLiteral("actionStopPlayBack"));
    actionStopPlayBack->setCheckable(true);
    actionStopPlayBack->setIcon(QIcon(":/icons/icons/selectionRegionDataMove.png"));

    actionStartPlayBack = new QAction(mainWinowPtr);
    actionStartPlayBack->setObjectName(QStringLiteral("actionStartPlayBack"));
    actionStartPlayBack->setCheckable(true);
    actionStartPlayBack->setIcon(QIcon(":/icons/icons/selectionRegionDataMove.png"));

    actionAnalsis = new QAction(mainWinowPtr);
    actionAnalsis->setObjectName(QStringLiteral("actionStartPlayBack"));
    actionAnalsis->setCheckable(true);
    actionAnalsis->setIcon(QIcon(":/icons/icons/selectionRegionDataMove.png"));

    actionOpen = new QAction(mainWinowPtr);
    actionOpen->setObjectName(QStringLiteral("actionOpen"));
    actionOpen->setIcon(QIcon(":/icons/icons/open.png"));

    actionWindowCascade = new QAction(mainWinowPtr);
    actionWindowCascade->setObjectName(QStringLiteral("actionWindowCascade"));
    actionWindowCascade->setIcon(QIcon(":/icons/icons/windowCascade.png"));

    actionWindowTile = new QAction(mainWinowPtr);
    actionWindowTile->setObjectName(QStringLiteral("actionWindowTile"));
    actionWindowTile->setIcon(QIcon(":/icons/icons/windowTile.png"));

    actionWindowMode = new QAction(mainWinowPtr);
    actionWindowMode->setObjectName(QStringLiteral("actionWindowMode"));
    actionWindowMode->setCheckable(true);
    actionWindowMode->setIcon(QIcon(":/icons/icons/windowMode.png"));

    actionTabMode = new QAction(mainWinowPtr);
    actionTabMode->setObjectName(QStringLiteral("actionTabMode"));
    actionTabMode->setCheckable(true);
    actionTabMode->setIcon(QIcon(":/icons/icons/tabMode.png"));

    actionSave = new QAction(mainWinowPtr);
    actionSave->setObjectName(QStringLiteral("actionSave"));
    actionSave->setEnabled(true);
    actionSave->setIcon(QIcon(":/icons/icons/save.png"));

    actionQuit = new QAction(mainWinowPtr);
    actionQuit->setObjectName(QStringLiteral("actionQuite"));
    actionQuit->setIcon(QIcon(":/icons/icons/quit.svg"));

    actionDataFeatureDock = new QAction(mainWinowPtr);
    actionDataFeatureDock->setObjectName(QStringLiteral("actionDataFeatureDock"));
    actionDataFeatureDock->setIcon(QIcon(":/icons/icons/dataFeatureDock.png"));

    actionOpenData = new QAction(mainWinowPtr);
    actionOpenData->setObjectName(QStringLiteral("actionNewChart"));
    actionOpenData->setIcon(QIcon(":/icons/icons/newChart.png"));

    actionConnectRedis  = new QAction(mainWinowPtr);
    actionConnectRedis->setObjectName(QStringLiteral("actionConnectRedis"));
    actionConnectRedis->setIcon(QIcon(":/icons/icons/newChart.png"));

    actionConnectHardWare = new QAction(mainWinowPtr);
    actionConnectHardWare->setObjectName(QStringLiteral("actionConnectHardWare"));
    actionConnectHardWare->setIcon(QIcon(":/icons/icons/newChart.png"));

    actionNewTrend = new QAction(mainWinowPtr);
    actionNewTrend->setObjectName(QStringLiteral("actionNewTrend"));
    actionNewTrend->setIcon(QIcon(":/icons/icons/newTrend.png"));

    actionClearProject = new QAction(mainWinowPtr);
    actionClearProject->setObjectName(QStringLiteral("actionClearProject"));
    actionClearProject->setIcon(QIcon(":/icons/icons/clearProject.png"));

    actionInRangDataRemove = new QAction(mainWinowPtr);
    actionInRangDataRemove->setObjectName(QStringLiteral("actionInRangDataRemove"));
    actionInRangDataRemove->setIcon(QIcon(":/icons/icons/inRangDataRemove.png"));

    actionOutRangDataRemove = new QAction(mainWinowPtr);
    actionOutRangDataRemove->setObjectName(QStringLiteral("actionOutRangDataRemove"));
    actionOutRangDataRemove->setIcon(QIcon(":/icons/icons/outRangDataRemove.png"));

    actionSubWindowListDock = new QAction(mainWinowPtr);
    actionSubWindowListDock->setObjectName(QStringLiteral("actionSubWindowListDock"));
    actionSubWindowListDock->setIcon(QIcon(":/icons/icons/subWindowListDock.png"));

    actionMessageInfoDock = new QAction(mainWinowPtr);
    actionMessageInfoDock->setObjectName(QStringLiteral("actionMessageInfoDock"));

    actionEnableChartCrossCursor = new QAction(mainWinowPtr);
    actionEnableChartCrossCursor->setObjectName(QStringLiteral("actionEnableChartPicker"));
    actionEnableChartCrossCursor->setCheckable(true);
    actionEnableChartCrossCursor->setIcon(QIcon(":/figureSet/icons/figureSet/crossCursor.svg"));

    actionEnableChartPanner = new QAction(mainWinowPtr);
    actionEnableChartPanner->setObjectName(QStringLiteral("actionEnableChartPanner"));
    actionEnableChartPanner->setCheckable(true);
    actionEnableChartPanner->setIcon(QIcon(":/figureSet/icons/figureSet/pannerChart.png"));

    actionEnableChartZoom = new QAction(mainWinowPtr);
    actionEnableChartZoom->setObjectName(QStringLiteral("actionEnableChartZoom"));
    actionEnableChartZoom->setCheckable(true);
    actionEnableChartZoom->setIcon(QIcon(":/figureSet/icons/figureSet/zoomChart.png"));

    actionShowGrid = new QAction(mainWinowPtr);
    actionShowGrid->setObjectName(QStringLiteral("actionShowGrid"));
    actionShowGrid->setIcon(QIcon(":/figureSet/icons/figureSet/showGrid.png"));

    actionShowHGrid = new QAction(mainWinowPtr);
    actionShowHGrid->setObjectName(QStringLiteral("actionShowHGrid"));
    actionShowHGrid->setIcon(QIcon(":/figureSet/icons/figureSet/GridXOnly.png"));

    actionShowVGrid = new QAction(mainWinowPtr);
    actionShowVGrid->setObjectName(QStringLiteral("actionShowVGrid"));
    actionShowVGrid->setIcon(QIcon(":/figureSet/icons/figureSet/GridYOnly.png"));

    actionShowCrowdedHGrid = new QAction(mainWinowPtr);
    actionShowCrowdedHGrid->setObjectName(QStringLiteral("actionShowCrowdedHGrid"));
    actionShowCrowdedHGrid->setIcon(QIcon(":/figureSet/icons/figureSet/GridXMin.png"));

    actionShowCrowdedVGrid = new QAction(mainWinowPtr);
    actionShowCrowdedVGrid->setObjectName(QStringLiteral("actionShowCrowdedVGrid"));
    actionShowCrowdedVGrid->setIcon(QIcon(":/figureSet/icons/figureSet/GridYMin.png"));

    actionShowLegend = new QAction(mainWinowPtr);
    actionShowLegend->setObjectName(QStringLiteral("actionShowLegend"));
    actionShowLegend->setIcon(QIcon(":/figureSet/icons/figureSet/ShowLegend.png"));

    actionShowLegendPanel = new QAction(mainWinowPtr);
    actionShowLegendPanel->setObjectName(QStringLiteral("actionLegendPanel"));
    actionShowLegendPanel->setIcon(QIcon(":/figureSet/icons/figureSet/legendPanel.svg"));

    actionChartZoomReset = new QAction(mainWinowPtr);
    actionChartZoomReset->setObjectName(QStringLiteral("actionChartZoomReset"));
    actionChartZoomReset->setIcon(QIcon(":/figureSet/icons/figureSet/zoomChartReset.png"));

    actionPickCurveToData = new QAction(mainWinowPtr);
    actionPickCurveToData->setObjectName(QStringLiteral("actionPickCurveToData"));
    actionPickCurveToData->setIcon(QIcon(":/icons/icons/pickCurveToData.png"));

    actionAbout = new QAction(mainWinowPtr);
    actionAbout->setObjectName(QStringLiteral("actionAbout"));
    actionAbout->setIcon(QIcon(":/icons/icons/information.png"));

    actionUndo = new QAction(mainWinowPtr);
    actionUndo->setObjectName(QStringLiteral("actionRescind"));
    actionUndo->setIcon(QIcon(":/icons/icons/undo.png"));

    actionRedo = new QAction(mainWinowPtr);
    actionRedo->setObjectName(QStringLiteral("actionRedo"));
    actionRedo->setIcon(QIcon(":/icons/icons/redo.png"));

    actionValueManagerDock = new QAction(mainWinowPtr);
    actionValueManagerDock->setObjectName(QStringLiteral("actionValueManagerDock"));
    actionValueManagerDock->setIcon(QIcon(":/icons/icons/valueManagerDock.png"));

    actionFigureSetDock = new QAction(mainWinowPtr);
    actionFigureSetDock->setObjectName(QStringLiteral("actionValueManagerDock"));
    actionFigureSetDock->setIcon(QIcon(":/icons/icons/figureSet.png"));

    actionViewValueInCurrentTab = new QAction(mainWinowPtr);
    actionViewValueInCurrentTab->setObjectName(QStringLiteral("actionViewValueInCurrentTab"));
    actionViewValueInCurrentTab->setIcon(QIcon(":/icons/icons/viewValueInCurrentTab.png"));

    actionViewValueAppendInCurrentTab = new QAction(mainWinowPtr);
    actionViewValueAppendInCurrentTab->setObjectName(QStringLiteral("actionViewValueAppendInCurrentTab"));
    actionViewValueAppendInCurrentTab->setIcon(QIcon(":/icons/icons/viewValueInCurrentTab.png"));

    actionViewValueInNewTab = new QAction(mainWinowPtr);
    actionViewValueInNewTab->setObjectName(QStringLiteral("actionViewValueInNewTab"));
    actionViewValueInNewTab->setIcon(QIcon(":/icons/icons/viewValueInNewTab.png"));

    actionLayerOutDock = new QAction(mainWinowPtr);
    actionLayerOutDock->setObjectName(QStringLiteral("actionLayerOutDock"));
    actionLayerOutDock->setIcon(QIcon(":/icons/icons/layout.png"));

    actionRenameValue = new QAction(mainWinowPtr);
    actionRenameValue->setObjectName(QStringLiteral("actionRenameValue"));
    actionRenameValue->setIcon(QIcon(":/icons/icons/renameValue.png"));

    actionSetDefalutDockPos = new QAction(mainWinowPtr);
    actionSetDefalutDockPos->setObjectName(QStringLiteral("actionSetDefalutDockPos"));
    actionSetDefalutDockPos->setIcon(QIcon(":/icons/icons/setDefalutDockPos.png"));

    actionValueViewerDock = new QAction(mainWinowPtr);
    actionValueViewerDock->setObjectName(QStringLiteral("actionValueViewerDock"));
    actionValueViewerDock->setIcon(QIcon(":/icons/icons/valueViewerDock.png"));

    actionFigureViewer = new QAction(mainWinowPtr);
    actionFigureViewer->setObjectName(QStringLiteral("actionFigureViewer"));
    actionFigureViewer->setIcon(QIcon(":/icons/icons/figureViewer.png"));

    actionDeleteValue = new QAction(mainWinowPtr);
    actionDeleteValue->setObjectName(QStringLiteral("actionDeleteValue"));
    actionDeleteValue->setIcon(QIcon(":/icons/icons/deleteValue.png"));

    actionOpenProject = new QAction(mainWinowPtr);
    actionOpenProject->setObjectName(QStringLiteral("actionOpenProject"));
    actionOpenProject->setIcon(QIcon(":/icons/icons/openProject.png"));

    actionSaveAs = new QAction(mainWinowPtr);
    actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
    actionSaveAs->setIcon(QIcon(":/icons/icons/saveAs.png"));

    actionProjectSetting = new QAction(mainWinowPtr);
    actionProjectSetting->setObjectName(QStringLiteral("actionProjectSetting"));
    actionProjectSetting->setIcon(QIcon(":/icons/icons/project.png"));

    actionSetZoomBase = new QAction(mainWinowPtr);
    actionSetZoomBase->setObjectName(QStringLiteral("actionZoomBase"));
    actionSetZoomBase->setIcon(QIcon(":/icons/icons/zoomBase.png"));

    actionZoomIn = new QAction(mainWinowPtr);
    actionZoomIn->setObjectName(QStringLiteral("actionZoomIn"));
    actionZoomIn->setIcon(QIcon(":/icons/icons/zoomIn.png"));

    actionZoomOut = new QAction(mainWinowPtr);
    actionZoomOut->setObjectName(QStringLiteral("actionZoomOut"));
    actionZoomOut->setIcon(QIcon(":/icons/icons/zoomOut.png"));

    actionZoomInBestView = new QAction(mainWinowPtr);
    actionZoomInBestView->setObjectName(QStringLiteral("actionZoomInBestView"));
    //actionZoomInBestView->setIcon(QIcon(":/icons/icons/zoomOut.png"));



    actionStartRectSelect = new QAction(mainWinowPtr);
    actionStartRectSelect->setIcon(QIcon(":/icons/icons/StartRectSelect.svg"));
    actionStartRectSelect->setObjectName(QStringLiteral("actionStartRectSelect"));
    actionStartRectSelect->setCheckable(true);

    actionStartEllipseSelect = new QAction(mainWinowPtr);
    actionStartEllipseSelect->setIcon(QIcon(":/icons/icons/StartEllipseSelect.svg"));
    actionStartEllipseSelect->setObjectName(QStringLiteral("actionStartEllipseSelect"));
    actionStartEllipseSelect->setCheckable(true);

    actionStartPolygonSelect = new QAction(mainWinowPtr);
    actionStartPolygonSelect->setIcon(QIcon(":/icons/icons/StartPolygonSelect.svg"));
    actionStartPolygonSelect->setObjectName(QStringLiteral("actionStartPolygonSelect"));
    actionStartPolygonSelect->setCheckable(true);

    actionGroupSelection = new QActionGroup(mainWinowPtr);
    actionGroupSelection->setObjectName(QStringLiteral("actionGroupSelection"));
    actionGroupSelection->setExclusive(true);
    actionGroupSelection->addAction(actionStartRectSelect);
    actionGroupSelection->addAction(actionStartEllipseSelect);
    actionGroupSelection->addAction(actionStartPolygonSelect);

    actionClearAllSelectiedRegion = new QAction(mainWinowPtr);
    actionClearAllSelectiedRegion->setObjectName(QStringLiteral("actionClearAllSelectiedRegion"));


    actionSingleSelection = new QAction(mainWinowPtr);
    actionSingleSelection->setObjectName(QStringLiteral("actionSingleSelection"));
    actionSingleSelection->setCheckable(true);
    actionSingleSelection->setChecked(true);
    actionSingleSelection->setMenuRole(QAction::TextHeuristicRole);
    actionSingleSelection->setIcon(QIcon(":/icons/icons/SingleSelection.png"));

    actionAdditionalSelection = new QAction(mainWinowPtr);
    actionAdditionalSelection->setObjectName(QStringLiteral("actionAdditionalSelection"));
    actionAdditionalSelection->setCheckable(true);
    actionAdditionalSelection->setIcon(QIcon(":/icons/icons/AdditionalSelection.png"));

    actionIntersectionSelection = new QAction(mainWinowPtr);
    actionIntersectionSelection->setObjectName(QStringLiteral("actionIntersectionSelection"));
    actionIntersectionSelection->setCheckable(true);
    actionIntersectionSelection->setIcon(QIcon(":/icons/icons/IntersectionSelection.png"));

    actionSubtractionSelection = new QAction(mainWinowPtr);
    actionSubtractionSelection->setObjectName(QStringLiteral("actionSubtractionSelection"));
    actionSubtractionSelection->setCheckable(true);
    actionSubtractionSelection->setIcon(QIcon(":/icons/icons/SubtractionSelection.png"));

    actionGroupchartRegionSelectionMode = new QActionGroup(mainWinowPtr);
    actionGroupchartRegionSelectionMode->setExclusive(true);
    actionGroupchartRegionSelectionMode->addAction(actionSingleSelection);
    actionGroupchartRegionSelectionMode->addAction(actionAdditionalSelection);
    actionGroupchartRegionSelectionMode->addAction(actionIntersectionSelection);
    actionGroupchartRegionSelectionMode->addAction(actionSubtractionSelection);


    actionDrawScatterChart = new QAction(mainWinowPtr);
    actionDrawScatterChart->setObjectName(QStringLiteral("actionDrawScatterChart"));
    //actionDrawScatterChart->setIcon(QIcon(":/icons/icons/SubtractionSelection.png"));

    actionDrawBarChart = new QAction(mainWinowPtr);
    actionDrawBarChart->setObjectName(QStringLiteral("actionDrawBarChart"));
    //actionDrawBarChart->setIcon(QIcon(":/icons/icons/SubtractionSelection.png"));

    actionDrawHistogramChart = new QAction(mainWinowPtr);
    actionDrawHistogramChart->setObjectName(QStringLiteral("actionDrawHistogramChart"));

    actionDrawBoxChart = new QAction(mainWinowPtr);
    actionDrawBoxChart->setObjectName(QStringLiteral("actionDrawBoxChart"));
    //actionDrawBoxChart->setIcon(QIcon(":/icons/icons/SubtractionSelection.png"));

    actionDrawIntervalChart = new QAction(mainWinowPtr);
    actionDrawIntervalChart->setObjectName(QStringLiteral("actionDrawIntervalChart"));



    actionSelectionRegionMove = new QAction(mainWinowPtr);
    actionSelectionRegionMove->setObjectName(QStringLiteral("actionSelectionRegionMove"));
    actionSelectionRegionMove->setCheckable(true);
    actionSelectionRegionMove->setIcon(QIcon(":/icons/icons/selectionRegionMove.png"));

    actionSelectionRegionDataMove = new QAction(mainWinowPtr);
    actionSelectionRegionDataMove->setObjectName(QStringLiteral("actionSelectionRegionDataMove"));
    actionSelectionRegionDataMove->setCheckable(true);
    actionSelectionRegionDataMove->setIcon(QIcon(":/icons/icons/selectionRegionDataMove.png"));

    actionGroupChartEditor = new QActionGroup(mainWinowPtr);
    actionGroupChartEditor->setExclusive(true);
    actionGroupChartEditor->addAction(actionSelectionRegionMove);
    actionGroupChartEditor->addAction(actionSelectionRegionDataMove);

    actionFigureEditSubPlotGeometry = new QAction(mainWinowPtr);
    actionFigureEditSubPlotGeometry->setObjectName(QStringLiteral("actionFigureEditSubPlotGeometry"));
    actionFigureEditSubPlotGeometry->setCheckable(true);
    actionFigureEditSubPlotGeometry->setIcon(QIcon(":/icons/icons/subplotEdit.png"));

    actionRibbonStyleOffice3Line = new QAction(mainWinowPtr); // ribbon的风格 - office 3行
    actionRibbonStyleOffice3Line->setObjectName(QStringLiteral("actionRibbonStyleOffice3Line"));
    actionRibbonStyleOffice3Line->setCheckable(true);

    actionRibbonStyleWps3Line = new QAction(mainWinowPtr); // ribbon的风格 - wps 3行
    actionRibbonStyleWps3Line->setObjectName(QStringLiteral("actionRibbonStyleWps3Line"));
    actionRibbonStyleWps3Line->setCheckable(true);

    actionRibbonStyleOffice2Line = new QAction(mainWinowPtr); // ribbon的风格 - office 2行
    actionRibbonStyleOffice2Line->setObjectName(QStringLiteral("actionRibbonStyleOffice2Line"));
    actionRibbonStyleOffice2Line->setCheckable(true);

    actionRibbonStyleWps2Line = new QAction(mainWinowPtr); // ribbon的风格 - wps 2行
    actionRibbonStyleWps2Line->setObjectName(QStringLiteral("actionRibbonStyleWps2Line"));
    actionRibbonStyleWps2Line->setCheckable(true);

    actionGroupRibbonStyle = new QActionGroup(mainWinowPtr);
    actionGroupRibbonStyle->setExclusive(true);
    actionGroupRibbonStyle->addAction(actionRibbonStyleOffice3Line);
    actionGroupRibbonStyle->addAction(actionRibbonStyleWps3Line);
    actionGroupRibbonStyle->addAction(actionRibbonStyleOffice2Line);
    actionGroupRibbonStyle->addAction(actionRibbonStyleWps2Line);

    actionGroupSkins = new QActionGroup(mainWinowPtr);
    actionGroupSkins->setObjectName(QStringLiteral("actionGroupSkins"));
    actionGroupSkins->setExclusive(true);

    actionClearRecentOpenFileHistroy = new QAction(mainWinowPtr);
    actionClearRecentOpenFileHistroy->setObjectName(QStringLiteral("actionClearRecentOpenFileHistroy"));

    actionClearRecentOpenProjectorHistroy = new QAction(mainWinowPtr);
    actionClearRecentOpenProjectorHistroy->setObjectName(QStringLiteral("actionClearRecentOpenProjectorHistroy"));

    actionImport = new QAction(mainWinowPtr);
    actionImport->setObjectName(QStringLiteral("actionImport"));
    actionImport->setIcon(QIcon(":/icons/icons/createValueWizard.png"));

    actionExport = new QAction(mainWinowPtr);
    actionExport->setObjectName(QStringLiteral("actionExport"));
    actionExport->setIcon(QIcon(":/icons/icons/createDouble1DimValue.png"));

    actionsystemEport = new QAction(mainWinowPtr);
    actionsystemEport->setObjectName(QStringLiteral("actionsystemEport"));
    actionsystemEport->setIcon(QIcon(":/icons/icons/createPoint1DimValue.png"));

    actionsystemImport = new QAction(mainWinowPtr);
    actionsystemImport->setObjectName(QStringLiteral("actionsystemImport"));
    actionsystemImport->setIcon(QIcon(":/icons/icons/createVariantTableValue.png"));

    actionValueCreateDoubleVector = new QAction(mainWinowPtr);
    actionValueCreateDoubleVector->setObjectName(QStringLiteral("actionValueCreateDouble1Dim"));
    actionValueCreateDoubleVector->setIcon(QIcon(":/icons/icons/createDouble1DimValue.png"));

    actionValueCreatePointVector = new QAction(mainWinowPtr);
    actionValueCreatePointVector->setObjectName(QStringLiteral("actionValueCreatePoint1Dim"));
    actionValueCreatePointVector->setIcon(QIcon(":/icons/icons/createPoint1DimValue.png"));

    actionValueCreateVariantTable = new QAction(mainWinowPtr);
    actionValueCreateVariantTable->setObjectName(QStringLiteral("actionValueCreateVariantTable"));
    actionValueCreateVariantTable->setIcon(QIcon(":/icons/icons/createVariantTableValue.png"));

    actionColorMapTable = new QAction(mainWinowPtr);
    actionColorMapTable->setObjectName(QStringLiteral("actionColorMapTable"));
    actionColorMapTable->setIcon(QIcon(":/icons/icons/colormap.svg"));

    selectCurrentCursorToActiveChart = new QAction(mainWinowPtr);
    selectCurrentCursorToActiveChart->setObjectName(QStringLiteral("selectCurrentCursorToActiveChart"));
    selectCurrentCursorToActiveChart->setEnabled(false);

    //==========================================================================
    //! 2. 菜单创建
    menuRecentOpenProject = new SARibbonMenu(mainWinowPtr);
    menuRecentOpenProject->setObjectName(QStringLiteral("menuRecentOpenProject"));
    menuRecentOpenProject->addSeparator();
    menuRecentOpenProject->addAction(actionClearRecentOpenProjectorHistroy);

    menuRecentOpenFile = new SARibbonMenu(mainWinowPtr);
    menuRecentOpenFile->setObjectName(QStringLiteral("menuRecentOpenFile"));
    menuRecentOpenFile->addSeparator();
    menuRecentOpenFile->addAction(actionClearRecentOpenFileHistroy);

    menuExport = new SARibbonMenu(mainWinowPtr);
    menuExport->setObjectName(QStringLiteral("menu_export"));
    menuExport->setIcon(QIcon(":/icons/icons/export.png"));

    menuImport = new SARibbonMenu(mainWinowPtr);
    menuImport->setObjectName(QStringLiteral("menu_import"));
    menuImport->setIcon(QIcon(":/icons/icons/import.png"));


    menuFile = new SARibbonMenu(mainWinowPtr);
    menuFile->setObjectName(QStringLiteral("menuFile"));
    menuFile->addAction(actionOpen);
    menuFile->addAction(actionOpenProject);

    menuFile->addMenu(menuRecentOpenFile);
    menuFile->addMenu(menuRecentOpenProject);
    //menuFile->addAction(menuRecentOpenFile->menuAction());
    menuFile->addAction(actionSave);
    menuFile->addAction(actionSaveAs);
    menuFile->addSeparator();
    menuFile->addAction(actionClearProject);
    menuFile->addAction(menuExport->menuAction());
    menuFile->addAction(menuImport->menuAction());
    menuFile->addSeparator();
    menuFile->addAction(actionQuit);

    menuWindowsViewSet = new SARibbonMenu(mainWinowPtr);
    menuWindowsViewSet->setObjectName(QStringLiteral("menu_windowsViewSet"));
    menuWindowsViewSet->setIcon(QIcon(":/icons/icons/windowViewSet.png"));
    menuWindowsViewSet->addAction(actionFigureViewer);
    menuWindowsViewSet->addAction(actionFigureSetDock);
    menuWindowsViewSet->addAction(actionDataFeatureDock);
    menuWindowsViewSet->addAction(actionSubWindowListDock);
    menuWindowsViewSet->addAction(actionLayerOutDock);
    menuWindowsViewSet->addAction(actionValueManagerDock);
    menuWindowsViewSet->addAction(actionValueViewerDock);
    menuWindowsViewSet->addAction(actionMessageInfoDock);

    menuAnalysis = new SARibbonMenu(mainWinowPtr);
    menuAnalysis->setObjectName(QStringLiteral("menuAnalysis"));
    menuAnalysis->setIcon(QIcon(":/icons/icons/allFunction.svg"));

    menuLineChart = new SARibbonMenu(mainWinowPtr);
    menuLineChart->setObjectName(QStringLiteral("menuLineChart"));
    menuLineChart->setIcon(QIcon(":/icons/icons/lineChart.svg"));
    menuLineChart->addAction(actionNewTrend);

    menuScatterChart = new SARibbonMenu(mainWinowPtr);
    menuScatterChart->setObjectName(QStringLiteral("menuScatterChart"));
    menuScatterChart->setIcon(QIcon(":/icons/icons/scatterChart.svg"));
    menuScatterChart->addAction(actionDrawScatterChart);

    menuBarChart = new SARibbonMenu(mainWinowPtr);
    menuBarChart->setObjectName(QStringLiteral("menuBarChart"));
    menuBarChart->setIcon(QIcon(":/icons/icons/barChart.svg"));
    menuBarChart->addAction(actionDrawBarChart);

    menuHistogramChart = new SARibbonMenu(mainWinowPtr);
    menuHistogramChart->setObjectName(QStringLiteral("menuHistogramChart"));
    menuHistogramChart->setIcon(QIcon(":/icons/icons/histogramChart.svg"));
    menuHistogramChart->addAction(actionDrawHistogramChart);
    menuHistogramChart->addAction(actionDrawIntervalChart);

    menuBoxChart = new SARibbonMenu(mainWinowPtr);
    menuBoxChart->setObjectName(QStringLiteral("menuBoxChart"));
    menuBoxChart->setIcon(QIcon(":/icons/icons/boxChart.svg"));
    menuBoxChart->addAction(actionDrawBoxChart);

    menuDataManager = new SARibbonMenu(mainWinowPtr);
    menuDataManager->setObjectName(QStringLiteral("menuDataManager"));
    menuDataManager->addAction(actionViewValueInCurrentTab);
    menuDataManager->addAction(actionViewValueAppendInCurrentTab);
    menuDataManager->addAction(actionViewValueInNewTab);
    menuDataManager->addSeparator();
    menuDataManager->addAction(actionDeleteValue);
    menuDataManager->addAction(actionRenameValue);



    menuGrid = new SARibbonMenu(mainWinowPtr);
    menuGrid->setObjectName(QStringLiteral("menuGrid"));
    menuGrid->addAction(actionShowGrid);
    menuGrid->addSeparator();
    menuGrid->addAction(actionShowHGrid);
    menuGrid->addAction(actionShowVGrid);
    menuGrid->addSeparator();
    menuGrid->addAction(actionShowCrowdedHGrid);
    menuGrid->addAction(actionShowCrowdedVGrid);



    menuZoomSet = new SARibbonMenu(mainWinowPtr);
    menuZoomSet->setIcon(QIcon(":/figureSet/icons/figureSet/zoomChart.png"));
    menuZoomSet->setObjectName(QStringLiteral("menuZoomSet"));
    menuZoomSet->addAction(actionEnableChartZoom);
    menuZoomSet->addSeparator();
    menuZoomSet->addAction(actionZoomIn);
    menuZoomSet->addAction(actionZoomOut);
    menuZoomSet->addAction(actionChartZoomReset);
    menuZoomSet->addAction(actionZoomInBestView);
    menuZoomSet->addSeparator();
    menuZoomSet->addAction(actionSetZoomBase);

    menuRegionSelect = new SARibbonMenu(mainWinowPtr);
    menuRegionSelect->setObjectName(QStringLiteral("menuRegionSelect"));
    menuRegionSelect->addAction(actionStartRectSelect);
    menuRegionSelect->addAction(actionStartEllipseSelect);
    menuRegionSelect->addAction(actionStartPolygonSelect);
    menuRegionSelect->addAction(actionClearAllSelectiedRegion);
    menuRegionSelect->addSeparator();
    menuRegionSelect->addAction(actionSingleSelection);
    menuRegionSelect->addAction(actionAdditionalSelection);
    menuRegionSelect->addAction(actionSubtractionSelection);
    menuRegionSelect->addAction(actionIntersectionSelection);

    menuChartSet = new SARibbonMenu(mainWinowPtr);
    menuChartSet->setObjectName(QStringLiteral("menuChartSet"));
    menuChartSet->addAction(actionEnableChartCrossCursor);
    menuChartSet->addAction(actionEnableChartPanner);
    menuChartSet->addAction(menuGrid->menuAction());
    menuChartSet->addAction(menuZoomSet->menuAction());
    menuChartSet->addAction(menuRegionSelect->menuAction());

    menuSkinList = new SARibbonMenu(mainWinowPtr);
    menuSkinList->setObjectName(QStringLiteral("menuSkinList"));
    menuSkinList->setIcon(QIcon(":/icons/icons/skin.png"));


    menuHelp = new SARibbonMenu(mainWinowPtr);
    menuHelp->setObjectName(QStringLiteral("menuHelp"));
    menuHelp->addAction(actionAbout);

    menuEdit = new SARibbonMenu(mainWinowPtr);
    menuEdit->setObjectName(QStringLiteral("menuEdit"));
    menuEdit->addAction(actionUndo);
    menuEdit->addAction(actionRedo);

    menuTool = new SARibbonMenu(mainWinowPtr);
    menuTool->setObjectName(QStringLiteral("menu_tool"));
    menuTool->addAction(actionProjectSetting);

    menuSelection = new SARibbonMenu(mainWinowPtr);
    menuSelection->addAction(actionStartRectSelect);
    menuSelection->addAction(actionStartEllipseSelect);
    menuSelection->addAction(actionStartPolygonSelect);
    menuSelection->addSeparator();
    menuSelection->addAction(actionClearAllSelectiedRegion);

    menuDataRemove = new SARibbonMenu(mainWinowPtr);
    menuDataRemove->addAction(actionOutRangDataRemove);

    menuShowCrowdedGrid = new SARibbonMenu(mainWinowPtr);
    menuShowCrowdedGrid->setObjectName(QStringLiteral("menuShowCrowdedGrid"));
    menuShowCrowdedGrid->setIcon(QIcon(":/figureSet/icons/figureSet/GridXOnly.png"));
    menuShowCrowdedGrid->addAction(actionShowCrowdedHGrid);
    menuShowCrowdedGrid->addAction(actionShowCrowdedVGrid);

    //ribbon 样式
    menuRibbonStyle = new SARibbonMenu(mainWinowPtr);
    menuRibbonStyle->setObjectName(QStringLiteral("menuRibbonStyle"));
    menuRibbonStyle->setIcon(QIcon(":/icons/icons/ribbonStyle.png"));
    menuRibbonStyle->addAction(actionRibbonStyleOffice3Line);
    menuRibbonStyle->addAction(actionRibbonStyleWps3Line);
    menuRibbonStyle->addAction(actionRibbonStyleOffice2Line);
    menuRibbonStyle->addAction(actionRibbonStyleWps2Line);

    //右键菜单
    menuFigureWindow = new QMenu(mainWinowPtr);
    menuFigureWindow->setObjectName(QStringLiteral("menuFigureWindow"));
    menuFigureWindow->addAction(selectCurrentCursorToActiveChart);
    sectionActionForFigureMenuDataView = menuFigureWindow->addSection(QStringLiteral("Data View"));
    menuFigureWindow->addAction(actionEnableChartCrossCursor);
    menuFigureWindow->addAction(actionEnableChartPanner);
//    menuFigureWindow->addAction(actionYDataPicker);
//    menuFigureWindow->addAction(actionXYDataPicker);
    menuFigureWindow->addMenu(menuZoomSet);

//=======start ribbon set=============================================================================================
    //! 3 开始布局ribbon

    //! 3.1 ApplicationButton

    ribbonApplicationButton = qobject_cast<SARibbonApplicationButton *>(menuBar->applicationButton());

//    ribbonRightTopBar = menuBar->activeTabBarRightButtonGroup();
//    ribbonRightTopBar->addAction(actionAbout);

    //! 3.2 Main Category Page
    mainRibbonCategory = menuBar->addCategoryPage(QStringLiteral("项目"));
    mainRibbonCategory->setObjectName(QStringLiteral("mainRibbonCategory"));
    //File Pannel
    mainCategoryFilePannel = mainRibbonCategory->addPannel(QStringLiteral("项目"));
    mainCategoryFilePannel->setObjectName(QStringLiteral("mainCategoryFilePannel"));
//    mainCategoryFilePannel->addLargeActionMenu(actionOpenProject, menuFile);
    mainCategoryFilePannel->addLargeAction(actionNew);
//    mainCategoryFilePannel->addLargeAction(actionSet); 删除项目设置按钮
    mainCategoryFilePannel->addLargeAction(actionOpen1);
    mainCategoryFilePannel->addLargeAction(actionProduct);


    //Chart Pannel
    mainCategoryChartPannel = mainRibbonCategory->addPannel(QStringLiteral("连接"));
//    mainCategoryChartPannel->addLargeAction(actionOpenData);

    mainCategoryChartPannel->addLargeAction(actionConnectRedis);
//    mainCategoryChartPannel->addLargeAction(actionConnectHardWare);



    //布局学校
    schoolPannel = mainRibbonCategory->addPannel("");
    schoolPannel->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    auto hbox = new QHBoxLayout();
    auto ss = new QSpacerItem(1000,10,QSizePolicy::Expanding,QSizePolicy::Expanding);
    auto ll = new QLabel();
    ll->setPixmap(QPixmap(":/windowIcons/icons/windowIcon/school.png"));
    ll->setContentsMargins(0,0,0,0);
    ll->setFixedSize(70,70);
    ll->setScaledContents(true);
    hbox->addSpacerItem(ss);
    hbox->addWidget(ll);
    spacer->setLayout(hbox);
    schoolPannel->addLargeWidget(spacer);



    //Value Operate Pannel
//    mainCategoryValuePannel = mainRibbonCategory->addPannel(QStringLiteral("参数"));隐藏这个pannel
    mainCategoryValuePannel = new SARibbonPannel();
    mainCategoryValuePannel->addLargeAction(actionImport);
    mainCategoryValuePannel->addLargeAction(actionExport);
    mainCategoryValuePannel->addLargeAction(actionsystemEport);
    mainCategoryValuePannel->addLargeAction(actionsystemImport);

    //! 3.3 operate Category Page
    operateRibbonCategory = menuBar->addCategoryPage(QStringLiteral("控制"));
    operateRibbonCategory->setObjectName(QStringLiteral("operateRibbonCategory"));
    //Selector Editor
    operateCategoryChartEditorPannel = operateRibbonCategory->addPannel(QStringLiteral("采集"));
    operateCategoryChartEditorPannel->setObjectName(QStringLiteral("operateCategorySelectEditorPannel"));
    operateCategoryChartEditorPannel->addLargeAction(actionBalance);
    operateCategoryChartEditorPannel->addLargeAction(actionCleanZero);
    operateCategoryChartEditorPannel->addLargeAction(actionStartCapture);
    operateCategoryChartEditorPannel->addLargeAction(actionSuspendCapture);
    operateCategoryChartEditorPannel->addLargeAction(actionStopCapture);

    //data view editor
//    operateCategoryDataViewPannel = operateRibbonCategory->addPannel(QStringLiteral("显示"));删除显示这个pannel
    operateCategoryDataViewPannel = new SARibbonPannel();//为了后面不报错
    operateCategoryDataViewPannel->setObjectName(QStringLiteral("operateCategorySelectEditorPannel"));
    operateCategoryDataViewPannel->addSmallAction(actionXYDataPicker);
    operateCategoryDataViewPannel->addSmallAction(actionYDataPicker);
    operateCategoryDataViewPannel->addSmallAction(actionXDataPicker);

    //legend pannel
//    chartLegendCategoryWindowPannel = operateRibbonCategory->addPannel("观测"); //删除观测这个pannel
    chartLegendCategoryWindowPannel = new SARibbonPannel(); //为了后面的代码不报错
    chartLegendCategoryWindowPannel->addLargeAction(actionhorizontalLarge);
    chartLegendCategoryWindowPannel->addLargeAction(actionhorizontalSmall);
    chartLegendCategoryWindowPannel->addLargeAction(actionverticalLarge);
    chartLegendCategoryWindowPannel->addLargeAction(actionverticalSmall);
    chartLegendCategoryWindowPannel->addSmallAction(actionSinglecursor);
    chartLegendCategoryWindowPannel->addSmallAction(actionNocursor);
    chartLegendCategoryWindowPannel->addSmallAction(actionPeakcursor);
    chartLegendCategoryWindowPannel->addSmallAction(actionAutomaticscale);
    chartLegendCategoryWindowPannel->addSmallAction(actionDefaultscale);

    //Grid pannel
    chartGridCategoryWindowPannel = operateRibbonCategory->addPannel("回放");
    chartGridCategoryWindowPannel->addLargeAction(actionStartPlayBack);
    chartGridCategoryWindowPannel->addLargeAction(actionStopPlayBack);


    //figure Opt pannel
    figureOptRibbonPannel = operateRibbonCategory->addPannel("分析");//删除这个pannel
//    figureOptRibbonPannel = new SARibbonPannel();
    figureOptRibbonPannel->addLargeAction(actionAnalsis);
    //学校图标
    auto schoolPannel1 = operateRibbonCategory->addPannel("");
    schoolPannel1->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    auto hbox1 = new QHBoxLayout();
    auto ss1 = new QSpacerItem(1000,10,QSizePolicy::Expanding,QSizePolicy::Expanding);
    auto ll1 = new QLabel();
    auto spacer1 = new QWidget();
    ll1->setPixmap(QPixmap(":/windowIcons/icons/windowIcon/school.png"));
    ll1->setContentsMargins(0,0,0,0);
    ll1->setFixedSize(70,70);
    ll1->setScaledContents(true);
    hbox1->addSpacerItem(ss1);
    hbox1->addWidget(ll1);
    spacer1->setLayout(hbox1);
    schoolPannel1->addLargeWidget(spacer1);


    //! 3.4 Analysis
    analysisRibbonCategory = menuBar->addCategoryPage(QStringLiteral("数据管理"));
    analysisRibbonCategory->setObjectName(QStringLiteral("analysisRibbonCategory"));
    //Analysis Pannel
    analysisCategoryFunctionPannel = analysisRibbonCategory->addPannel(QStringLiteral("统计数据"));
    analysisCategoryFunctionPannel->addLargeMenu(menuAnalysis);
    ribbonGalleryFuntions = analysisCategoryFunctionPannel->addGallery();
//    analysisCategoryshebeiPannel = analysisRibbonCategory->addPannel(QStringLiteral("设备"));
//    analysisCategoryshebeiPannel ->addLargeAction(actionShowLegend);
    //! 3.5 View Category Page
//    viewRibbonCategory = menuBar->addCategoryPage(QStringLiteral("设置")); //取消选项栏
    viewRibbonCategory = new SARibbonCategory();
    viewRibbonCategory->setObjectName(QStringLiteral("viewRibbonCategory"));
    //Window Pannel
    viewCategoryWindowPannel = viewRibbonCategory->addPannel(QStringLiteral("参数"));
    viewCategoryWindowPannel->addLargeMenu(menuWindowsViewSet, QToolButton::InstantPopup);
    //sub window mode
    windowModeCategoryWindowPannel = viewRibbonCategory->addPannel(QStringLiteral("采集计划"));
    windowModeCategoryWindowPannel->addLargeAction(actionTabMode);
    windowModeCategoryWindowPannel->addLargeAction(actionWindowMode);
    windowModeCategoryWindowPannel->addMediumAction(actionWindowCascade);
    windowModeCategoryWindowPannel->addMediumAction(actionWindowTile);

    //! 3.6 table  Context Category
    tableRibbonContextCategory = menuBar->addContextCategory(QStringLiteral("Table"), Qt::red, TableContextCategory);
    tableRibbonCategory = tableRibbonContextCategory->addCategoryPage(QStringLiteral("Table"));
    tableHighLightRibbonPannel = tableRibbonCategory->addPannel("HighLight");
    tableHighLightRibbonPannel->addLargeAction(actionColorMapTable);

    //! 3.7
    SARibbonQuickAccessBar *quickAccessBar = menuBar->quickAccessBar();

    quickAccessBar->setEnableShowIcon(false);
    quickAccessBar->addSeparator();
    quickAccessBar->addAction(actionSave);
    quickAccessBar->addSeparator();
    quickAccessBar->addAction(actionUndo);
    quickAccessBar->addAction(actionRedo);
    quickAccessBar->addSeparator();
    quickAccessBar->addMenu(menuSkinList);
    quickAccessBar->addMenu(menuRibbonStyle);
    quickAccessBar->addSeparator();

    //menuBar->repaint();
//=======end ribbon set=======================================================================================

    statusBar = new QStatusBar(mainWinowPtr);
    statusBar->setObjectName(QStringLiteral("statusBar"));
    mainWinowPtr->setStatusBar(statusBar);
    dockWidget_DataFeature = new QDockWidget(mainWinowPtr);
    dockWidget_DataFeature->setObjectName(QStringLiteral("dockWidget_DataFeature"));
    dockWidget_DataFeature->setFloating(false);
    dockWidget_DataFeature->setFeatures(QDockWidget::AllDockWidgetFeatures);
    dockWidget_DataFeature->setFocusPolicy(Qt::ClickFocus);
    dockWidgetContents_2 = new QWidget();
    dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
    verticalLayout_2 = new QVBoxLayout(dockWidgetContents_2);
    verticalLayout_2->setSpacing(0);
    verticalLayout_2->setContentsMargins(11, 11, 11, 11);
    verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
    verticalLayout_2->setContentsMargins(0, 0, 0, 0);
    dataFeatureWidget = new SADataFeatureWidget(dockWidgetContents_2);
    dataFeatureWidget->setObjectName(QStringLiteral("dataFeatureWidget"));

    verticalLayout_2->addWidget(dataFeatureWidget);

    dockWidget_DataFeature->setWidget(dockWidgetContents_2);
    mainWinowPtr->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_DataFeature);


    dockWidget_windowList = new QDockWidget(mainWinowPtr);
    dockWidget_windowList->setObjectName(QStringLiteral("dockWidget_windowList"));
    dockWidget_windowList->setFocusPolicy(Qt::ClickFocus);
    dockWidgetContents_4 = new QWidget();
    dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
    verticalLayout_6 = new QVBoxLayout(dockWidgetContents_4);
    verticalLayout_6->setSpacing(1);
    verticalLayout_6->setContentsMargins(11, 11, 11, 11);
    verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
    verticalLayout_6->setContentsMargins(1, 1, 1, 1);
    listView_window = new QListView(dockWidgetContents_4);
    listView_window->setObjectName(QStringLiteral("listView_window"));

    verticalLayout_6->addWidget(listView_window);

    dockWidget_windowList->setWidget(dockWidgetContents_4);
    mainWinowPtr->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_windowList);
    dockWidget_valueManage = new QDockWidget(mainWinowPtr);
    dockWidget_valueManage->setObjectName(QStringLiteral("dockWidget_valueManage"));
    dockWidget_valueManage->setFocusPolicy(Qt::ClickFocus);
    dockWidget_valueManage->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
    dockWidgetContents_3 = new QWidget();
    dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
    verticalLayout_3 = new QVBoxLayout(dockWidgetContents_3);
    verticalLayout_3->setSpacing(1);
    verticalLayout_3->setContentsMargins(11, 11, 11, 11);
    verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
    verticalLayout_3->setContentsMargins(1, 1, 1, 1);
    treeView_valueManager = new SAValueManagerTreeView(dockWidgetContents_3);
    treeView_valueManager->setObjectName(QStringLiteral("treeView_valueManager"));
    treeView_valueManager->setContextMenuPolicy(Qt::CustomContextMenu);
    treeView_valueManager->setEditTriggers(QAbstractItemView::NoEditTriggers);
    treeView_valueManager->setDragEnabled(true);
    treeView_valueManager->setDragDropOverwriteMode(true);
    treeView_valueManager->setDragDropMode(QAbstractItemView::DragDrop);
    treeView_valueManager->setAlternatingRowColors(true);
    treeView_valueManager->setSelectionMode(QAbstractItemView::ExtendedSelection);
    treeView_valueManager->setWordWrap(false);

    verticalLayout_3->addWidget(treeView_valueManager);

    dockWidget_valueManage->setWidget(dockWidgetContents_3);
    mainWinowPtr->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_valueManage);
    dockWidget_plotLayer = new QDockWidget(mainWinowPtr);
    dockWidget_plotLayer->setObjectName(QStringLiteral("dockWidget_plotLayer"));
    dockWidget_plotLayer->setFocusPolicy(Qt::ClickFocus);
    figureLayoutWidget = new SAFigureLayoutWidget(dockWidget_plotLayer);
    figureLayoutWidget->setObjectName(QStringLiteral("SAFigureLayoutWidget"));
    dockWidget_plotLayer->setWidget(figureLayoutWidget);

    mainWinowPtr->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_plotLayer);
    dockWidget_chartDataViewer = new QDockWidget(mainWinowPtr);
    dockWidget_chartDataViewer->setObjectName(QStringLiteral("dockWidget_chartDataViewer"));
    dockWidget_chartDataViewer->setFocusPolicy(Qt::ClickFocus);

    chartDatasViewWidget = new SAChartDatasViewWidget();
    chartDatasViewWidget->setObjectName(QStringLiteral("chartDatasViewWidget"));
    dockWidget_chartDataViewer->setWidget(chartDatasViewWidget);

    mainWinowPtr->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_chartDataViewer);



    dockWidget_main = new QDockWidget(mainWinowPtr);
    dockWidget_main->setObjectName(QStringLiteral("dockWidget_main"));
    dockWidget_main->setFocusPolicy(Qt::ClickFocus);
    QIcon icon48;

    icon48.addFile(QStringLiteral(":/windowIcons/icons/windowIcon/figureWindow.svg"), QSize(), QIcon::Normal, QIcon::Off);
    dockWidget_main->setWindowIcon(icon48);
    dockWidget_main->setFeatures(QDockWidget::AllDockWidgetFeatures);
    dockWidget_main->setAllowedAreas(Qt::AllDockWidgetAreas);
    dockWidgetContents_7 = new QWidget();
    dockWidgetContents_7->setObjectName(QStringLiteral("dockWidgetContents_7"));

//-------------------jdh动态图刷新-----------------------------------------





//    verticalLayout_4 = new QVBoxLayout(dockWidgetContents_7);
//    verticalLayout_4->setSpacing(0);
//    verticalLayout_4->setContentsMargins(11, 11, 11, 11);
//    verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
//    verticalLayout_4->setContentsMargins(0, 0, 0, 0);
    mdiArea = new QMdiArea(dockWidgetContents_7);
    mdiArea->setObjectName(QStringLiteral("mdiArea"));
    mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    mdiArea->setViewMode(QMdiArea::TabbedView);
    mdiArea->setDocumentMode(false);
    mdiArea->setTabsClosable(true);
    mdiArea->setTabsMovable(true);
    mdiArea->setTabShape(QTabWidget::Triangular);

    auto dockWidgetContents_jj = new QWidget();
    dockWidgetContents_jj->setObjectName(QStringLiteral("dockWidgetContents_jj"));
//    this->spectrunView = new JSpectrumWindow(dockWidgetContents_jj);
//    verticalLayout_4->addWidget(mdiArea);
    this->dynamicSpectrum = new JDynamicWidget();
    this->dynamicSpectrum->init(4);
    dockWidget_main->setWidget(this->dynamicSpectrum);
    rightButtomText = new QLabel("状态");
    leftButtomText = new QLabel("当前项目为:");
    leftButtomText->setAlignment(Qt::AlignLeft);
    rightButtomText->setAlignment(Qt::AlignRight);
//    auto vbox = new QVBoxLayout(statusBar);
//    vbox->addWidget(leftButtomText);
//    vbox->addSpacerItem(new QSpacerItem(100,10));
//    vbox->addWidget(rightButtomText);

    statusBar->addPermanentWidget(leftButtomText,1);
    statusBar->addPermanentWidget(rightButtomText);

    mainWinowPtr->addDockWidget(static_cast<Qt::DockWidgetArea>(4), dockWidget_main);
    dockWidget_valueViewer = new QDockWidget(mainWinowPtr);
    dockWidget_valueViewer->setObjectName(QStringLiteral("dockWidget_valueViewer"));
    dockWidget_valueViewer->setFocusPolicy(Qt::ClickFocus);
    dockWidgetContents_6 = new QWidget();
    dockWidgetContents_6->setObjectName(QStringLiteral("dockWidgetContents_6"));
    verticalLayout_8 = new QVBoxLayout(dockWidgetContents_6);
    verticalLayout_8->setSpacing(0);
    verticalLayout_8->setContentsMargins(11, 11, 11, 11);
    verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
    verticalLayout_8->setContentsMargins(0, 0, 0, 0);
    tabWidget_valueViewer = new SATabValueViewerWidget(dockWidgetContents_6);
    tabWidget_valueViewer->setObjectName(QStringLiteral("tabWidget_valueViewer"));
    tabWidget_valueViewer->setFocusPolicy(Qt::ClickFocus);
    verticalLayout_8->addWidget(tabWidget_valueViewer);

    dockWidget_valueViewer->setWidget(dockWidgetContents_6);
    mainWinowPtr->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_valueViewer);
    dockWidget_message = new QDockWidget(mainWinowPtr);
    dockWidget_message->setObjectName(QStringLiteral("dockWidget_message"));
    dockWidget_message->setFocusPolicy(Qt::ClickFocus);
    dockWidgetContents_8 = new QWidget();
    dockWidgetContents_8->setObjectName(QStringLiteral("dockWidgetContents_8"));
    verticalLayout_9 = new QVBoxLayout(dockWidgetContents_8);
    verticalLayout_9->setSpacing(0);
    verticalLayout_9->setContentsMargins(11, 11, 11, 11);
    verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
    verticalLayout_9->setContentsMargins(0, 0, 0, 0);
    saMessageWidget = new SAMessageWidget(dockWidgetContents_8);
    saMessageWidget->setObjectName(QStringLiteral("saMessageWidget"));

    verticalLayout_9->addWidget(saMessageWidget);

    dockWidget_message->setWidget(dockWidgetContents_8);

    mainWinowPtr->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_message);
    dockWidget_set = new QDockWidget(mainWinowPtr);
    dockWidget_set->setObjectName(QStringLiteral("dockWidget_plotSet"));
    dockWidget_set->setFocusPolicy(Qt::ClickFocus);
    dockWidgetContents = new QWidget();
    dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
    verticalLayout = new QVBoxLayout(dockWidgetContents);
    verticalLayout->setSpacing(0);
    verticalLayout->setContentsMargins(11, 11, 11, 11);
    verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
    verticalLayout->setContentsMargins(0, 0, 0, 0);
    setWidget = new SASetWidget(dockWidgetContents);
    setWidget->setObjectName(QStringLiteral("SetWidget"));

    verticalLayout->addWidget(setWidget);

    dockWidget_set->setWidget(dockWidgetContents);
    mainWinowPtr->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_set);


    retranslateUi(mainWinowPtr);
    QObject::connect(actionQuit, SIGNAL(triggered()), mainWinowPtr, SLOT(close()));

    tabWidget_valueViewer->setCurrentIndex(-1);


    QMetaObject::connectSlotsByName(mainWinowPtr);
}


void MainWindowPrivate::retranslateUi(MainWindow *mainWinowPtr)
{
    mainWinowPtr->setWindowTitle(QApplication::translate("MainWindow", "故障诊断系统-采集端", 0));
    actionOpen1->setText(QApplication::translate("MainWindow", "打开项目", 0));
    actionNew->setText(QApplication::translate("MainWindow", "新建项目", 0));
    actionProduct->setText(QApplication::translate("MainWindow","产品管理",0));
    actionSet->setText(QApplication::translate("MainWindow", "项目设置", 0));

    actionCleanZero->setText(QApplication::translate("MainWindow", "清楚零点", 0));
    actionBalance->setText(QApplication::translate("MainWindow", "平衡", 0));
    actionStartCapture->setText(QApplication::translate("MainWindow", "开始采集", 0));
    actionSuspendCapture->setText(QApplication::translate("MainWindow", "暂停采集", 0));
    actionStopCapture->setText(QApplication::translate("MainWindow", "停止采集", 0));

    actionYDataPicker->setText(QApplication::translate("MainWindow", "横向", 0));
    actionXYDataPicker->setText(QApplication::translate("MainWindow", "纵向", 0));
    actionXDataPicker->setText(QApplication::translate("MainWindow", "层叠", 0));

    actionhorizontalLarge->setText(QApplication::translate("MainWindow", "横向放大", 0));
    actionverticalSmall->setText(QApplication::translate("MainWindow", "横向缩小", 0));
    actionverticalLarge->setText(QApplication::translate("MainWindow", "纵向放大", 0));
    actionverticalSmall->setText(QApplication::translate("MainWindow", "纵向缩小", 0));
    actionSinglecursor->setText(QApplication::translate("MainWindow", "单光标", 0));
    actionNocursor->setText(QApplication::translate("MainWindow", "无光标", 0));
    actionPeakcursor->setText(QApplication::translate("MainWindow", "峰值光标", 0));
    actionAutomaticscale->setText(QApplication::translate("MainWindow", "自动刻度", 0));
    actionDefaultscale->setText(QApplication::translate("MainWindow", "默认刻度", 0));

    actionStartPlayBack->setText(QApplication::translate("MainWindow", "开始回放", 0));
    actionStopPlayBack->setText(QApplication::translate("MainWindow", "停止回放", 0));
    actionAnalsis->setText("分析回放");

    menuRecentOpenFile->setTitle(QApplication::translate("MainWindow", "Recent Open Files", 0));
    menuRecentOpenProject->setTitle(QApplication::translate("MainWindow", "Recent Open Projects", 0));
    actionClearRecentOpenFileHistroy->setText(QApplication::translate("MainWindow", "Clear", 0));
    actionClearRecentOpenProjectorHistroy->setText(QApplication::translate("MainWindow", "Clear", 0));
#ifndef QT_NO_TOOLTIP
    actionOpen->setToolTip(QApplication::translate("MainWindow", "Open File", 0));
#endif // QT_NO_TOOLTIP
    actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
    actionWindowCascade->setText(QApplication::translate("MainWindow", "Cascade", 0));
    actionWindowTile->setText(QApplication::translate("MainWindow", "Tile", 0));
    actionWindowMode->setText(QApplication::translate("MainWindow", "Window Mode", 0));
    actionTabMode->setText(QApplication::translate("MainWindow", "Tab Mode", 0));
    actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
    actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
    actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
    actionDataFeatureDock->setText(QApplication::translate("MainWindow", "Data Feature", 0));
    actionOpenData->setText(QApplication::translate("MainWindow", "打开数据文件", 0));
    actionConnectRedis->setText(QApplication::translate("MainWindow", "连接远程数据库", 0));
//    actionConnectHardWare->setText(QApplication::translate("MainWindow", "硬件连接", 0));


    actionNewTrend->setText(QApplication::translate("MainWindow", "Trend Chart", 0));
#ifndef QT_NO_TOOLTIP
    actionNewTrend->setToolTip(QApplication::translate("MainWindow", "Plot Trend With User Select Data Value", 0));
#endif // QT_NO_TOOLTIP
    actionClearProject->setText(QApplication::translate("MainWindow", "Clear", 0));
    actionInRangDataRemove->setText(QApplication::translate("MainWindow", "remove in", 0));
    actionOutRangDataRemove->setText(QApplication::translate("MainWindow", "remove out", 0));

    actionSubWindowListDock->setText(QApplication::translate("MainWindow", "SubWindow List", 0));
    actionEnableChartCrossCursor->setText(QApplication::translate("MainWindow", "Cross", 0));
    actionEnableChartPanner->setText(QApplication::translate("MainWindow", "Panner", 0));
    actionEnableChartZoom->setText(QApplication::translate("MainWindow", "Zoom", 0));
    actionEnableChartZoom->setIconText(QApplication::translate("MainWindow", "Zoom", 0));

    actionShowGrid->setText(QApplication::translate("MainWindow", "Grid", 0));
    actionShowGrid->setIconText(QApplication::translate("MainWindow", "Grid", 0));
    actionShowHGrid->setText(QApplication::translate("MainWindow", "H Grid", 0));
    actionShowHGrid->setIconText(QApplication::translate("MainWindow", "H Grid", 0));
#ifndef QT_NO_TOOLTIP
    actionShowHGrid->setToolTip(QApplication::translate("MainWindow", "Horizontal Grid", 0));
#endif // QT_NO_TOOLTIP
    actionShowVGrid->setText(QApplication::translate("MainWindow", "V Grid", 0));
    actionShowVGrid->setIconText(QApplication::translate("MainWindow", "V Grid", 0));
#ifndef QT_NO_TOOLTIP
    actionShowVGrid->setToolTip(QApplication::translate("MainWindow", "Vertical Grid", 0));
#endif // QT_NO_TOOLTIP
    actionShowCrowdedHGrid->setText(QApplication::translate("MainWindow", "Crowded H Grid", 0));
#ifndef QT_NO_TOOLTIP
    actionShowCrowdedHGrid->setToolTip(QApplication::translate("MainWindow", "Crowded H Grid", 0));
#endif // QT_NO_TOOLTIP
    actionShowCrowdedVGrid->setText(QApplication::translate("MainWindow", "Crowded V Grid", 0));
    actionShowLegend->setText(QApplication::translate("MainWindow", "Legend", 0));
    actionShowLegend->setIconText(QApplication::translate("MainWindow", "Legend", 0));
#ifndef QT_NO_TOOLTIP
    actionShowLegend->setToolTip(QApplication::translate("MainWindow", "Show/Hide Legend", 0));
#endif // QT_NO_TOOLTIP
    actionShowLegendPanel->setText(QApplication::translate("MainWindow", "Legend Panel", 0));
    actionShowLegendPanel->setIconText(QApplication::translate("MainWindow", "Legend Panel", 0));
    actionChartZoomReset->setText(QApplication::translate("MainWindow", "Zoom Reset", 0));
    actionPickCurveToData->setText(QApplication::translate("MainWindow", "Pick Data", 0));
    actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
    actionUndo->setText(QApplication::translate("MainWindow", "Rescind", 0));
    actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
    actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0));
    actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Z", 0));
    actionValueManagerDock->setText(QApplication::translate("MainWindow", "Value Manager", 0));
    actionViewValueInCurrentTab->setText(QApplication::translate("MainWindow", "View Value In Current Tab", 0));
    actionViewValueAppendInCurrentTab->setText(QApplication::translate("MainWindow", "View Value Append In Current Tab", 0));
    actionViewValueInNewTab->setText(QApplication::translate("MainWindow", "View Value In New Tab", 0));
    actionLayerOutDock->setText(QApplication::translate("MainWindow", "Layerout", 0));
    actionRenameValue->setText(QApplication::translate("MainWindow", "Rename Value", 0));
#ifndef QT_NO_TOOLTIP
    actionRenameValue->setToolTip(QApplication::translate("MainWindow", "Rename Value", 0));
#endif // QT_NO_TOOLTIP
    actionSetDefalutDockPos->setText(QApplication::translate("MainWindow", "Defalut View", 0));
    actionValueViewerDock->setText(QApplication::translate("MainWindow", "Value View", 0));
    actionFigureViewer->setText(QApplication::translate("MainWindow", "Figure View", 0));
    actionMessageInfoDock->setText(QApplication::translate("MainWindow", "Message View", 0));
    actionDeleteValue->setText(QApplication::translate("MainWindow", "Delete Value", 0));
#ifndef QT_NO_TOOLTIP
    actionDeleteValue->setToolTip(QApplication::translate("MainWindow", "Delete Value", 0));
#endif // QT_NO_TOOLTIP
    actionOpenProject->setText(QApplication::translate("MainWindow", "Open Project", 0));
    actionSaveAs->setText(QApplication::translate("MainWindow", "Save As", 0));
    actionProjectSetting->setText(QApplication::translate("MainWindow", "Project Setting", 0));
    actionSetZoomBase->setText(QApplication::translate("MainWindow", "Set Zoom Base", 0));
    actionZoomIn->setText(QApplication::translate("MainWindow", "Zoom In", 0));
    actionZoomIn->setShortcut(QApplication::translate("MainWindow", "Ctrl+=", 0));
    actionZoomOut->setText(QApplication::translate("MainWindow", "Zoom Out", 0));
    actionZoomOut->setShortcut(QApplication::translate("MainWindow", "Ctrl+-", 0));
    actionZoomInBestView->setText(QApplication::translate("MainWindow", "Best View", 0));
    actionStartRectSelect->setText(QApplication::translate("MainWindow", "Rect Select", 0));
    actionStartEllipseSelect->setText(QApplication::translate("MainWindow", "Ellipse Select", 0));
    actionStartPolygonSelect->setText(QApplication::translate("MainWindow", "Polygon Select", 0));
    actionClearAllSelectiedRegion->setText(QApplication::translate("MainWindow", "Clear Select", 0));
    actionSingleSelection->setText(QApplication::translate("MainWindow", "New Select", 0));
    actionAdditionalSelection->setText(QApplication::translate("MainWindow", "Add Select", 0));
    actionDrawIntervalChart->setText(QApplication::translate("MainWindow", "Add Interval", 0));
    actionIntersectionSelection->setText(QApplication::translate("MainWindow", "Int Select", 0));
    actionSubtractionSelection->setText(QApplication::translate("MainWindow", "Sub Select", 0));
    actionDrawScatterChart->setText(QApplication::translate("MainWindow", "Scatter", 0));
    actionDrawBarChart->setText(QApplication::translate("MainWindow", "Bar", 0));
    actionDrawHistogramChart->setText(QApplication::translate("MainWindow", "Histogram", 0));
    actionDrawBoxChart->setText(QApplication::translate("MainWindow", "Box", 0));
    actionSelectionRegionMove->setText(QApplication::translate("MainWindow", "Transform", 0));
    actionSelectionRegionDataMove->setText(QApplication::translate("MainWindow", "Move Datas", 0));

    actionFigureSetDock->setText(QApplication::translate("MainWindow", "Figure Setting", 0));

    actionImport->setText(QApplication::translate("MainWindow", "导入通道参数", 0));
    actionExport->setText(QApplication::translate("MainWindow", "导出通道参数", 0));
    actionsystemEport->setText(QApplication::translate("MainWindow", "导入系统参数", 0));
    actionsystemImport->setText(QApplication::translate("MainWindow", "导出系统参数", 0));

    actionValueCreateDoubleVector->setText(QApplication::translate("MainWindow", "double vector", 0));
    actionValueCreatePointVector->setText(QApplication::translate("MainWindow", "point vector", 0));
    actionValueCreateVariantTable->setText(QApplication::translate("MainWindow", "variant table", 0));
    actionFigureEditSubPlotGeometry->setText(QApplication::translate("MainWindow", "Subplot Edit", 0));
    actionColorMapTable->setText(QApplication::translate("MainWindow", "Highlight Table", 0));

    actionRibbonStyleOffice3Line->setText(QApplication::translate("MainWindow", "3 line office stype", 0));
    actionRibbonStyleWps3Line->setText(QApplication::translate("MainWindow", "3 line wps style", 0));
    actionRibbonStyleOffice2Line->setText(QApplication::translate("MainWindow", "2 line office stype", 0));
    actionRibbonStyleWps2Line->setText(QApplication::translate("MainWindow", "2 line wps style", 0));

    menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    menuExport->setTitle(QApplication::translate("MainWindow", "Export", 0));
    menuImport->setTitle(QApplication::translate("MainWindow", "Import", 0));
    menuWindowsViewSet->setTitle(QApplication::translate("MainWindow", "Windows View", 0));
    menuAnalysis->setTitle(QApplication::translate("MainWindow", "Analysis", 0));
    menuDataManager->setTitle(QApplication::translate("MainWindow", "Data Manager", 0));
    menuChartSet->setTitle(QApplication::translate("MainWindow", "Chart Set", 0));
    menuGrid->setTitle(QApplication::translate("MainWindow", "Grid", 0));
    menuZoomSet->setTitle(QApplication::translate("MainWindow", "Zoom Set", 0));

    menuRegionSelect->setTitle(QApplication::translate("MainWindow", "Select", 0));
    menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
    menuTool->setTitle(QApplication::translate("MainWindow", "Tool", 0));
    menuLineChart->setTitle(QApplication::translate("MainWindow", "Line", 0));
    menuScatterChart->setTitle(QApplication::translate("MainWindow", "Scatter", 0));
    menuBarChart->setTitle(QApplication::translate("MainWindow", "Bar", 0));
    menuBoxChart->setTitle(QApplication::translate("MainWindow", "Box", 0));
    menuHistogramChart->setTitle(QApplication::translate("MainWindow", "Histogram", 0));
    menuSkinList->setTitle(QApplication::translate("MainWindow", "Skin", 0));
    menuRibbonStyle->setTitle(QApplication::translate("MainWindow", "Ribbon UI Style", 0));
    dockWidget_DataFeature->setWindowTitle(QApplication::translate("MainWindow", "Data Feature", 0));
//    toolBar_chart->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
//    toolBar_chartSet->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
//    toolBar_plot->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    dockWidget_windowList->setWindowTitle(QApplication::translate("MainWindow", "Window List", 0));
    dockWidget_valueManage->setWindowTitle(QApplication::translate("MainWindow", "Value Manage", 0));
    dockWidget_plotLayer->setWindowTitle(QApplication::translate("MainWindow", "Layout", 0));
    dockWidget_chartDataViewer->setWindowTitle(QApplication::translate("MainWindow", "Chart Data", 0));
#ifndef QT_NO_TOOLTIP
    dockWidget_main->setToolTip(QString());
#endif // QT_NO_TOOLTIP
    dockWidget_main->setWindowTitle(QApplication::translate("MainWindow", "Main", 0));
    dockWidget_valueViewer->setWindowTitle(QApplication::translate("MainWindow", "value View", 0));
    dockWidget_message->setWindowTitle(QApplication::translate("MainWindow", "Message", 0));
    dockWidget_set->setWindowTitle(QApplication::translate("MainWindow", "plot config", 0));
//    toolBarChartTools->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));

    mainRibbonCategory->setWindowTitle(QApplication::translate("MainWindow", "项目", 0));
    viewRibbonCategory->setWindowTitle(QApplication::translate("MainWindow", "视图", 0));
    operateRibbonCategory->setWindowTitle(QApplication::translate("MainWindow", "控制", 0));
    analysisRibbonCategory->setWindowTitle(QApplication::translate("MainWindow", "数据管理", 0));
    tableRibbonCategory->setWindowTitle(QApplication::translate("MainWindow", "设置", 0));
//    tableRibbonContextCategory->setContextTitle(QApplication::translate("MainWindow", "Tab.Opt", 0));

    mainCategoryFilePannel->setWindowTitle(QApplication::translate("MainWindow", "项目", 0));
    mainCategoryChartPannel->setWindowTitle(QApplication::translate("MainWindow", "连接", 0));
    mainCategoryValuePannel->setWindowTitle(QApplication::translate("MainWindow", "参数", 0));
    viewCategoryWindowPannel->setWindowTitle(QApplication::translate("MainWindow", "Window", 0));
    windowModeCategoryWindowPannel->setWindowTitle(QApplication::translate("MainWindow", "Sub Window Mode", 0));
    operateCategoryChartEditorPannel->setWindowTitle(QApplication::translate("MainWindow", "采集", 0));
    tableHighLightRibbonPannel->setWindowTitle(QApplication::translate("MainWindow", "Hight Light", 0));


    operateCategoryDataViewPannel->setWindowTitle(QApplication::translate("MainWindow", "显示", 0));
    chartLegendCategoryWindowPannel->setWindowTitle(QApplication::translate("MainWindow", "观测", 0));
    chartGridCategoryWindowPannel->setWindowTitle(QApplication::translate("MainWindow", "回放", 0));
    figureOptRibbonPannel->setWindowTitle(QApplication::translate("MainWindow", "采样", 0));
    menuShowCrowdedGrid->setTitle(QApplication::translate("MainWindow", "Crowded", 0));

    ribbonApplicationButton->setFixedWidth(110);
    ribbonApplicationButton->setText(QApplication::translate("MainWindow", "哈尔滨工业大学", 0));
// figure window 菜单设置
    selectCurrentCursorToActiveChart->setText(QApplication::translate("MainWindow", "set to active chart", 0));
    sectionActionForFigureMenuDataView->setText(QApplication::translate("MainWindow", "Data View", 0));
}
