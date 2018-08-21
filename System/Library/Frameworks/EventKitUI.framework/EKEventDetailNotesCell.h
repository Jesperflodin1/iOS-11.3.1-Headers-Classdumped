/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@protocol EKEventDetailNotesCellDelegate;
@class UILabel, UITextView;

@interface EKEventDetailNotesCell : EKEventDetailCell {

	UILabel* _notesTitleView;
	UITextView* _notesView;
	BOOL _isTruncatingNotes;
	id<EKEventDetailNotesCellDelegate> _noteDelegate;

}

@property (nonatomic,readonly) BOOL isTruncatingNotes;                                            //@synthesize isTruncatingNotes=_isTruncatingNotes - In the implementation block
@property (assign,nonatomic,__weak) id<EKEventDetailNotesCellDelegate> noteDelegate;              //@synthesize noteDelegate=_noteDelegate - In the implementation block
-(void)layoutSubviews;
-(BOOL)update;
-(BOOL)isTruncatingNotes;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id<EKEventDetailNotesCellDelegate>)noteDelegate;
-(void)setNoteDelegate:(id<EKEventDetailNotesCellDelegate>)arg1 ;
-(id)_notesView;
-(double)_layoutForWidth:(double)arg1 ;
-(id)_notesTitleView;
-(void)setIsTruncatingNotes:(BOOL)arg1 ;
@end

