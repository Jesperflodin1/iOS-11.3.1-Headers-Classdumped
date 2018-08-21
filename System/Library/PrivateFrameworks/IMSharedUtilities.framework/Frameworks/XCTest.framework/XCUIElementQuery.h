/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XCTest/XCTElementSnapshotProvider.h>
#import <XCTest/XCUIElementTypeQueryProvider.h>

@protocol XCTElementSetTransformer;
@class NSArray, NSOrderedSet, XCElementSnapshot, NSString, XCUIApplication, XCTElementQuery, XCUIElement;

@interface XCUIElementQuery : NSObject <XCTElementSnapshotProvider, XCUIElementTypeQueryProvider> {

	BOOL _changesScope;
	BOOL _stopsOnFirstMatch;
	XCUIElementQuery* _inputQuery;
	unsigned long long _expressedType;
	NSArray* _expressedIdentifiers;
	NSOrderedSet* _lastInput;
	NSOrderedSet* _lastOutput;
	XCElementSnapshot* _rootElementSnapshot;
	NSString* _queryDescription;
	id<XCTElementSetTransformer> _transformer;

}

@property (readonly) XCUIElementQuery * inputQuery;                                            //@synthesize inputQuery=_inputQuery - In the implementation block
@property (assign) BOOL changesScope;                                                          //@synthesize changesScope=_changesScope - In the implementation block
@property (assign) BOOL stopsOnFirstMatch;                                                     //@synthesize stopsOnFirstMatch=_stopsOnFirstMatch - In the implementation block
@property (assign) unsigned long long expressedType;                                           //@synthesize expressedType=_expressedType - In the implementation block
@property (copy) NSArray * expressedIdentifiers;                                               //@synthesize expressedIdentifiers=_expressedIdentifiers - In the implementation block
@property (copy) NSOrderedSet * lastInput;                                                     //@synthesize lastInput=_lastInput - In the implementation block
@property (copy) NSOrderedSet * lastOutput;                                                    //@synthesize lastOutput=_lastOutput - In the implementation block
@property (retain) XCElementSnapshot * rootElementSnapshot;                                    //@synthesize rootElementSnapshot=_rootElementSnapshot - In the implementation block
@property (readonly) XCUIApplication * application; 
@property (copy,readonly) NSString * queryDescription;                                         //@synthesize queryDescription=_queryDescription - In the implementation block
@property (copy,readonly) NSString * elementDescription; 
@property (copy,readonly) XCElementSnapshot * elementSnapshotForDebugDescription; 
@property (copy,readonly) XCTElementQuery * backingQuery; 
@property (retain) id<XCTElementSetTransformer> transformer;                                   //@synthesize transformer=_transformer - In the implementation block
@property (readonly) XCUIElement * element; 
@property (readonly) unsigned long long count; 
@property (copy,readonly) NSArray * allElementsBoundByAccessibilityElement; 
@property (copy,readonly) NSArray * allElementsBoundByIndex; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) XCUIElementQuery * touchBars; 
@property (copy,readonly) XCUIElementQuery * groups; 
@property (copy,readonly) XCUIElementQuery * windows; 
@property (copy,readonly) XCUIElementQuery * sheets; 
@property (copy,readonly) XCUIElementQuery * drawers; 
@property (copy,readonly) XCUIElementQuery * alerts; 
@property (copy,readonly) XCUIElementQuery * dialogs; 
@property (copy,readonly) XCUIElementQuery * buttons; 
@property (copy,readonly) XCUIElementQuery * radioButtons; 
@property (copy,readonly) XCUIElementQuery * radioGroups; 
@property (copy,readonly) XCUIElementQuery * checkBoxes; 
@property (copy,readonly) XCUIElementQuery * disclosureTriangles; 
@property (copy,readonly) XCUIElementQuery * popUpButtons; 
@property (copy,readonly) XCUIElementQuery * comboBoxes; 
@property (copy,readonly) XCUIElementQuery * menuButtons; 
@property (copy,readonly) XCUIElementQuery * toolbarButtons; 
@property (copy,readonly) XCUIElementQuery * popovers; 
@property (copy,readonly) XCUIElementQuery * keyboards; 
@property (copy,readonly) XCUIElementQuery * keys; 
@property (copy,readonly) XCUIElementQuery * navigationBars; 
@property (copy,readonly) XCUIElementQuery * tabBars; 
@property (copy,readonly) XCUIElementQuery * tabGroups; 
@property (copy,readonly) XCUIElementQuery * toolbars; 
@property (copy,readonly) XCUIElementQuery * statusBars; 
@property (copy,readonly) XCUIElementQuery * tables; 
@property (copy,readonly) XCUIElementQuery * tableRows; 
@property (copy,readonly) XCUIElementQuery * tableColumns; 
@property (copy,readonly) XCUIElementQuery * outlines; 
@property (copy,readonly) XCUIElementQuery * outlineRows; 
@property (copy,readonly) XCUIElementQuery * browsers; 
@property (copy,readonly) XCUIElementQuery * collectionViews; 
@property (copy,readonly) XCUIElementQuery * sliders; 
@property (copy,readonly) XCUIElementQuery * pageIndicators; 
@property (copy,readonly) XCUIElementQuery * progressIndicators; 
@property (copy,readonly) XCUIElementQuery * activityIndicators; 
@property (copy,readonly) XCUIElementQuery * segmentedControls; 
@property (copy,readonly) XCUIElementQuery * pickers; 
@property (copy,readonly) XCUIElementQuery * pickerWheels; 
@property (copy,readonly) XCUIElementQuery * switches; 
@property (copy,readonly) XCUIElementQuery * toggles; 
@property (copy,readonly) XCUIElementQuery * links; 
@property (copy,readonly) XCUIElementQuery * images; 
@property (copy,readonly) XCUIElementQuery * icons; 
@property (copy,readonly) XCUIElementQuery * searchFields; 
@property (copy,readonly) XCUIElementQuery * scrollViews; 
@property (copy,readonly) XCUIElementQuery * scrollBars; 
@property (copy,readonly) XCUIElementQuery * staticTexts; 
@property (copy,readonly) XCUIElementQuery * textFields; 
@property (copy,readonly) XCUIElementQuery * secureTextFields; 
@property (copy,readonly) XCUIElementQuery * datePickers; 
@property (copy,readonly) XCUIElementQuery * textViews; 
@property (copy,readonly) XCUIElementQuery * menus; 
@property (copy,readonly) XCUIElementQuery * menuItems; 
@property (copy,readonly) XCUIElementQuery * menuBars; 
@property (copy,readonly) XCUIElementQuery * menuBarItems; 
@property (copy,readonly) XCUIElementQuery * maps; 
@property (copy,readonly) XCUIElementQuery * webViews; 
@property (copy,readonly) XCUIElementQuery * steppers; 
@property (copy,readonly) XCUIElementQuery * incrementArrows; 
@property (copy,readonly) XCUIElementQuery * decrementArrows; 
@property (copy,readonly) XCUIElementQuery * tabs; 
@property (copy,readonly) XCUIElementQuery * timelines; 
@property (copy,readonly) XCUIElementQuery * ratingIndicators; 
@property (copy,readonly) XCUIElementQuery * valueIndicators; 
@property (copy,readonly) XCUIElementQuery * splitGroups; 
@property (copy,readonly) XCUIElementQuery * splitters; 
@property (copy,readonly) XCUIElementQuery * relevanceIndicators; 
@property (copy,readonly) XCUIElementQuery * colorWells; 
@property (copy,readonly) XCUIElementQuery * helpTags; 
@property (copy,readonly) XCUIElementQuery * mattes; 
@property (copy,readonly) XCUIElementQuery * dockItems; 
@property (copy,readonly) XCUIElementQuery * rulers; 
@property (copy,readonly) XCUIElementQuery * rulerMarkers; 
@property (copy,readonly) XCUIElementQuery * grids; 
@property (copy,readonly) XCUIElementQuery * levelIndicators; 
@property (copy,readonly) XCUIElementQuery * cells; 
@property (copy,readonly) XCUIElementQuery * layoutAreas; 
@property (copy,readonly) XCUIElementQuery * layoutItems; 
@property (copy,readonly) XCUIElementQuery * handles; 
@property (copy,readonly) XCUIElementQuery * otherElements; 
@property (copy,readonly) XCUIElementQuery * statusItems; 
@property (readonly) XCUIElement * firstMatch; 
-(id)matchingSnapshotsWithError:(id*)arg1 ;
-(id)descendantsMatchingType:(unsigned long long)arg1 ;
-(id)_elementMatchingAccessibilityElementOfSnapshot:(id)arg1 ;
-(id)snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 error:(id*)arg4 ;
-(XCUIElementQuery *)touchBars;
-(XCUIElementQuery *)sheets;
-(XCUIElementQuery *)drawers;
-(XCUIElementQuery *)dialogs;
-(XCUIElementQuery *)radioButtons;
-(XCUIElementQuery *)radioGroups;
-(XCUIElementQuery *)checkBoxes;
-(XCUIElementQuery *)disclosureTriangles;
-(XCUIElementQuery *)popUpButtons;
-(XCUIElementQuery *)comboBoxes;
-(XCUIElementQuery *)menuButtons;
-(XCUIElementQuery *)toolbarButtons;
-(XCUIElementQuery *)popovers;
-(XCUIElementQuery *)navigationBars;
-(XCUIElementQuery *)tabBars;
-(XCUIElementQuery *)tabGroups;
-(XCUIElementQuery *)toolbars;
-(XCUIElementQuery *)statusBars;
-(XCUIElementQuery *)tableRows;
-(XCUIElementQuery *)outlines;
-(XCUIElementQuery *)outlineRows;
-(XCUIElementQuery *)collectionViews;
-(XCUIElementQuery *)sliders;
-(XCUIElementQuery *)pageIndicators;
-(XCUIElementQuery *)progressIndicators;
-(XCUIElementQuery *)activityIndicators;
-(XCUIElementQuery *)segmentedControls;
-(XCUIElementQuery *)pickers;
-(XCUIElementQuery *)pickerWheels;
-(XCUIElementQuery *)switches;
-(XCUIElementQuery *)toggles;
-(XCUIElementQuery *)searchFields;
-(XCUIElementQuery *)scrollViews;
-(XCUIElementQuery *)scrollBars;
-(XCUIElementQuery *)staticTexts;
-(XCUIElementQuery *)secureTextFields;
-(XCUIElementQuery *)datePickers;
-(XCUIElementQuery *)menus;
-(XCUIElementQuery *)menuBars;
-(XCUIElementQuery *)menuBarItems;
-(XCUIElementQuery *)maps;
-(XCUIElementQuery *)steppers;
-(XCUIElementQuery *)incrementArrows;
-(XCUIElementQuery *)decrementArrows;
-(XCUIElementQuery *)ratingIndicators;
-(XCUIElementQuery *)valueIndicators;
-(XCUIElementQuery *)splitGroups;
-(XCUIElementQuery *)splitters;
-(XCUIElementQuery *)relevanceIndicators;
-(XCUIElementQuery *)colorWells;
-(XCUIElementQuery *)helpTags;
-(XCUIElementQuery *)mattes;
-(XCUIElementQuery *)dockItems;
-(XCUIElementQuery *)rulers;
-(XCUIElementQuery *)rulerMarkers;
-(XCUIElementQuery *)grids;
-(XCUIElementQuery *)levelIndicators;
-(XCUIElementQuery *)layoutAreas;
-(XCUIElementQuery *)otherElements;
-(XCUIElementQuery *)statusItems;
-(XCUIElement *)firstMatch;
-(id)_descendantMatchingAccessibilityElement:(id)arg1 ;
-(NSString *)elementDescription;
-(id)childrenMatchingType:(unsigned long long)arg1 ;
-(XCElementSnapshot *)elementSnapshotForDebugDescription;
-(id)debugDescriptionWithSnapshot:(id)arg1 ;
-(id)matchingSnapshotsHandleUIInterruption:(BOOL)arg1 withError:(id*)arg2 ;
-(XCUIElementQuery *)inputQuery;
-(BOOL)changesScope;
-(unsigned long long)expressedType;
-(NSArray *)expressedIdentifiers;
-(id)_derivedExpressedIdentifiers;
-(unsigned long long)_derivedExpressedType;
-(XCTElementQuery *)backingQuery;
-(void)setRootElementSnapshot:(XCElementSnapshot *)arg1 ;
-(id)matchingSnapshotsForLocallyEvaluatedQuery:(id)arg1 error:(id*)arg2 ;
-(id)_debugDescriptionWithIndent:(id*)arg1 rootElementSnapshot:(id)arg2 ;
-(id)_predicateWithType:(unsigned long long)arg1 identifier:(id)arg2 ;
-(id)initWithInputQuery:(id)arg1 queryDescription:(id)arg2 transformer:(id)arg3 ;
-(void)setChangesScope:(BOOL)arg1 ;
-(void)setExpressedType:(unsigned long long)arg1 ;
-(id)_queryWithPredicate:(id)arg1 description:(id)arg2 ;
-(id)_queryWithPredicate:(id)arg1 ;
-(void)setExpressedIdentifiers:(NSArray *)arg1 ;
-(id)_containingPredicate:(id)arg1 queryDescription:(id)arg2 ;
-(id)elementBoundByIndex:(unsigned long long)arg1 ;
-(void)setStopsOnFirstMatch:(BOOL)arg1 ;
-(id)matchingType:(unsigned long long)arg1 identifier:(id)arg2 ;
-(id)elementMatchingType:(unsigned long long)arg1 identifier:(id)arg2 ;
-(BOOL)stopsOnFirstMatch;
-(XCElementSnapshot *)rootElementSnapshot;
-(BOOL)_resolveRemoteElements:(id)arg1 inSnapshot:(id)arg2 error:(id*)arg3 ;
-(id)ascending:(unsigned long long)arg1 ;
-(id)descending:(unsigned long long)arg1 ;
-(id)sorted:(/*^block*/id)arg1 ;
-(id)matchingPredicate:(id)arg1 ;
-(id)matchingIdentifier:(id)arg1 ;
-(id)containingPredicate:(id)arg1 ;
-(id)containingType:(unsigned long long)arg1 identifier:(id)arg2 ;
-(id)elementMatchingPredicate:(id)arg1 ;
-(id)elementWithTitle:(id)arg1 ;
-(id)elementWithLabel:(id)arg1 ;
-(id)elementWithValue:(id)arg1 ;
-(id)elementWithPlaceholderValue:(id)arg1 ;
-(NSArray *)allElementsBoundByAccessibilityElement;
-(NSArray *)allElementsBoundByIndex;
-(NSOrderedSet *)lastInput;
-(void)setLastInput:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)lastOutput;
-(void)setLastOutput:(NSOrderedSet *)arg1 ;
-(id)init;
-(unsigned long long)count;
-(NSString *)debugDescription;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(XCUIElementQuery *)windows;
-(XCUIElementQuery *)images;
-(XCUIElementQuery *)cells;
-(XCUIElementQuery *)textFields;
-(XCUIApplication *)application;
-(XCUIElementQuery *)groups;
-(XCUIElementQuery *)icons;
-(XCUIElementQuery *)keys;
-(XCUIElementQuery *)menuItems;
-(XCUIElementQuery *)handles;
-(void)setTransformer:(id<XCTElementSetTransformer>)arg1 ;
-(id<XCTElementSetTransformer>)transformer;
-(XCUIElementQuery *)browsers;
-(XCUIElementQuery *)alerts;
-(NSString *)queryDescription;
-(XCUIElementQuery *)timelines;
-(XCUIElementQuery *)keyboards;
-(id)filter:(/*^block*/id)arg1 ;
-(XCUIElementQuery *)buttons;
-(id)elementWithIdentifier:(id)arg1 ;
-(XCUIElement *)element;
-(XCUIElementQuery *)tables;
-(XCUIElementQuery *)textViews;
-(XCUIElementQuery *)webViews;
-(id)elementAtIndex:(unsigned long long)arg1 ;
-(XCUIElementQuery *)tabs;
-(XCUIElementQuery *)links;
-(XCUIElementQuery *)tableColumns;
-(XCUIElementQuery *)layoutItems;
@end

