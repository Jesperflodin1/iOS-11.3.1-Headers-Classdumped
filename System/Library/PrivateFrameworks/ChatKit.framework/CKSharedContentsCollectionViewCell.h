/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKSharedAssetCollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKSharedContentsCollectionViewCellDelegate;
@class UIImage, UIImageView, UITapGestureRecognizer, NSString;

@interface CKSharedContentsCollectionViewCell : CKSharedAssetCollectionViewCell <UIGestureRecognizerDelegate> {

	BOOL _editing;
	UIImage* _previewImage;
	UIImageView* _checkmarkView;
	id<CKSharedContentsCollectionViewCellDelegate> _delegate;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                               //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                                                      //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkView;                                                 //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (assign,nonatomic,__weak) id<CKSharedContentsCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                               //@synthesize editing=_editing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<CKSharedContentsCollectionViewCellDelegate>)delegate;
-(void)setDelegate:(id<CKSharedContentsCollectionViewCellDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)isEditing;
-(void)setSelected:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)copy:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)more:(id)arg1 ;
-(void)saveAttachment:(id)arg1 ;
-(UIImageView *)checkmarkView;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(UIImage *)previewImage;
-(void)setupTapGestureRecognizer;
-(void)toggleCheckmarkViewWithEnabled:(BOOL)arg1 ;
@end
