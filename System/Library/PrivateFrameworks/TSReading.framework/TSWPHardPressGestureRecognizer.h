/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/_UINonEditableTextSelectionForceGesture.h>

@class TSWPRep;

@interface TSWPHardPressGestureRecognizer : _UINonEditableTextSelectionForceGesture {

	TSWPRep* _targetRep;
	unsigned long long _previousPressCount;

}

@property (nonatomic,retain) TSWPRep * targetRep;                                 //@synthesize targetRep=_targetRep - In the implementation block
@property (assign,nonatomic) unsigned long long previousPressCount;               //@synthesize previousPressCount=_previousPressCount - In the implementation block
@property (nonatomic,readonly) unsigned long long currentPressCount; 
-(void)dealloc;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(void)setTargetRep:(TSWPRep *)arg1 ;
-(TSWPRep *)targetRep;
-(unsigned long long)currentPressCount;
-(unsigned long long)previousPressCount;
-(void)setPreviousPressCount:(unsigned long long)arg1 ;
@end
