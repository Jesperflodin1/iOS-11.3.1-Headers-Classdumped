//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UITextField, UITextView;
@protocol CbExporterDescriptionCellDelegate;

@interface CbExporterDescriptionCell : UITableViewCell <UITextViewDelegate>
{
    id <CbExporterDescriptionCellDelegate> _delegate;
    double _cellHeight;
    UITextView *_textView;
    UITextField *_placeholderTextField;
}

+ (double)textViewWidthForTableWidth:(double)arg1;
+ (id)textFont;
+ (struct UIEdgeInsets)contentInset;
+ (double)minCellHeight;
@property(retain, nonatomic) UITextField *placeholderTextField; // @synthesize placeholderTextField=_placeholderTextField;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) id <CbExporterDescriptionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *text;
- (void)setFocus;
- (void)dealloc;
- (id)initWithCellSize:(struct CGSize)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCellSize:(struct CGSize)arg1 leftInset:(double)arg2 reuseIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

