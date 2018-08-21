/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCell.h>

@class UIButton;

@interface CKTranscriptMessageCell : CKTranscriptCell {

	BOOL _wantsContactImageLayout;
	UIButton* _failureButton;

}

@property (nonatomic,retain) UIButton * failureButton;                                     //@synthesize failureButton=_failureButton - In the implementation block
@property (assign,nonatomic) BOOL wantsContactImageLayout;                                 //@synthesize wantsContactImageLayout=_wantsContactImageLayout - In the implementation block
@property (assign,nonatomic) BOOL failed; 
@property (nonatomic,readonly) BOOL failureButtonAdjustsContentAlignmentRect; 
+(double)failureButtonWidthPlusSpacing;
-(id)description;
-(UIEdgeInsets)safeAreaInsets;
-(BOOL)failed;
-(void)layoutSubviewsForContents;
-(id)contactImageView;
-(UIButton *)failureButton;
-(void)setWantsContactImageLayout:(BOOL)arg1 ;
-(void)setFailed:(BOOL)arg1 ;
-(BOOL)wantsContactImageLayout;
-(BOOL)failureButtonAdjustsContentAlignmentRect;
-(void)setFailureButton:(UIButton *)arg1 ;
@end

