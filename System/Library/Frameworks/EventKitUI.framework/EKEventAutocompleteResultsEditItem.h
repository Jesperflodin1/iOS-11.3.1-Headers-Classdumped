/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKCalendarItemEditItem.h>

@class NSArray;

@interface EKEventAutocompleteResultsEditItem : EKCalendarItemEditItem {

	BOOL _suggestionApplied;
	NSArray* _results;

}

@property (nonatomic,retain) NSArray * results;                                                           //@synthesize results=_results - In the implementation block
@property (assign,nonatomic,__weak) id<EKEventAutocompleteResultsEditItemDelegate> delegate; 
@property (nonatomic,readonly) BOOL hasSuggestedLocationResult; 
+(id)_backgroundColor;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(BOOL)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(BOOL)hasSuggestedLocationResult;
@end

