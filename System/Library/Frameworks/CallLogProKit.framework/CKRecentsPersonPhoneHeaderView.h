/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallLogProKit.framework/CallLogProKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallLogProKit/CallLogProKit-Structs.h>
#import <UIKit/UIView.h>

@protocol CKRecentsPersonPhoneHeaderViewDelegate;
@class NSArray;

@interface CKRecentsPersonPhoneHeaderView : UIView {

	BOOL _showBorders;
	NSArray* _callRecords;
	id<CKRecentsPersonPhoneHeaderViewDelegate> _delegate;

}

@property (nonatomic,retain) NSArray * callRecords;                                            //@synthesize callRecords=_callRecords - In the implementation block
@property (assign,nonatomic) BOOL showBorders;                                                 //@synthesize showBorders=_showBorders - In the implementation block
@property (assign,nonatomic) id<CKRecentsPersonPhoneHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setShowBorders:(BOOL)arg1 ;
-(long long)answeredFaceTimeCallCount;
-(BOOL)showBorders;
-(void)detailsButotnClicked;
-(double)intrinsicContentHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CKRecentsPersonPhoneHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<CKRecentsPersonPhoneHeaderViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSArray *)callRecords;
-(void)setCallRecords:(NSArray *)arg1 ;
-(void)initializeViews;
@end

