/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIKBTouchState;

@interface UIKBTouchStateTask : NSObject <NSCopying> {

	UIKBTouchState* _touchState;
	/*^block*/id _task;
	BOOL _isBusy;

}

@property (nonatomic,retain,readonly) UIKBTouchState * touchState;              //@synthesize touchState=_touchState - In the implementation block
@property (nonatomic,copy,readonly) id task;                                    //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) BOOL isBusy;                                       //@synthesize isBusy=_isBusy - In the implementation block
+(id)touchStateTaskForTouchState:(id)arg1 andTask:(/*^block*/id)arg2 ;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTouchState:(id)arg1 andTask:(/*^block*/id)arg2 ;
-(UIKBTouchState *)touchState;
-(id)task;
-(BOOL)isBusy;
-(void)setIsBusy:(BOOL)arg1 ;
@end

