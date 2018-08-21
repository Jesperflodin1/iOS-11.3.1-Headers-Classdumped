/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WGWidgetListEditViewControllerDataSource <NSObject>
@optional
-(long long)layoutModeForWidgetListEditViewController:(id)arg1;
-(id)widgetListEditViewController:(id)arg1 displayNameForGroup:(id)arg2;

@required
-(id)groupsForWidgetListEditViewController:(id)arg1;
-(id)widgetListEditViewController:(id)arg1 displayNameForItemWithIdentifier:(id)arg2;
-(id)widgetListEditViewController:(id)arg1 iconForItemWithIdentifier:(id)arg2;
-(id)widgetListEditViewController:(id)arg1 itemIdentifiersForGroup:(id)arg2;
-(id)disabledInterfaceItemIdentifiersForWidgetListEditViewController:(id)arg1;
-(BOOL)widgetListEditViewControllerShouldIncludeInternalWidgets:(id)arg1;
-(BOOL)widgetListEditViewController:(id)arg1 isItemWithIdentifierEnabled:(id)arg2;
-(void)widgetListEditViewController:(id)arg1 didReorderItemsWithIdentifiersInGroups:(id)arg2;
-(void)widgetListEditViewController:(id)arg1 acknowledgeInterfaceItemsWithIdentifiers:(id)arg2;
-(void)widgetListEditViewController:(id)arg1 setEnabled:(BOOL)arg2 forItemsWithIdentifiers:(id)arg3;
-(id)widgetListEditViewController:(id)arg1 defaultGroupForItemWithIdentifier:(id)arg2;
-(BOOL)widgetListEditViewController:(id)arg1 isItemWithIdentifierNew:(id)arg2;

@end

