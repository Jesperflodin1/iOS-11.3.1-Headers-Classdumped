/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSUUID, UITextRange;

@interface UIAccessibilityCustomRotorItemResult : NSObject {

	NSUUID* uuid;
	id<NSObject> _targetElement;
	UITextRange* _targetRange;

}

@property (nonatomic,retain) NSUUID * uuid; 
@property (assign,nonatomic,__weak) id<NSObject> targetElement;              //@synthesize targetElement=_targetElement - In the implementation block
@property (nonatomic,retain) UITextRange * targetRange;                      //@synthesize targetRange=_targetRange - In the implementation block
-(void)setTargetRange:(UITextRange *)arg1 ;
-(NSUUID *)uuid;
-(UITextRange *)targetRange;
-(void)setUuid:(NSUUID *)arg1 ;
-(id<NSObject>)targetElement;
-(void)setTargetElement:(id<NSObject>)arg1 ;
-(id)initWithTargetElement:(id)arg1 targetRange:(id)arg2 ;
@end

