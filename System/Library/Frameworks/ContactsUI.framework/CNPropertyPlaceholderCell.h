/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;

@interface CNPropertyPlaceholderCell : CNLabeledCell {

	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
-(BOOL)shouldIndentWhileEditing;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setCardGroupItem:(id)arg1 ;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(id)labelView;
@end

