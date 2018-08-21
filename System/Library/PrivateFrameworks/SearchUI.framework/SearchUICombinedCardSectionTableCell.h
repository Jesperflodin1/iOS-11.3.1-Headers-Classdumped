/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUITableViewCell.h>

@class NSMutableArray;

@interface SearchUICombinedCardSectionTableCell : SearchUITableViewCell {

	NSMutableArray* _subcells;

}

@property (retain) NSMutableArray * subcells;              //@synthesize subcells=_subcells - In the implementation block
+(id)cellViewForTableModel:(id)arg1 section:(unsigned long long)arg2 rowRange:(NSRange)arg3 style:(unsigned long long)arg4 feedbackDelegate:(id)arg5 ;
+(void)updateChevronAndSeparatorForCell:(id)arg1 tableModel:(id)arg2 indexPath:(id)arg3 ;
-(id)initWithTableModel:(id)arg1 section:(unsigned long long)arg2 rowRange:(NSRange)arg3 style:(unsigned long long)arg4 feedbackDelegate:(id)arg5 ;
-(void)setSubcells:(NSMutableArray *)arg1 ;
-(NSMutableArray *)subcells;
@end
