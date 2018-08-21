/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
@interface CCUIPunchOutMask : NSObject {

	long long _style;
	double _cornerRadius;
	unsigned long long _roundedCorners;
	CGRect _frame;

}

@property (nonatomic,readonly) CGRect frame;                                   //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) long long style;                                //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) unsigned long long roundedCorners;              //@synthesize roundedCorners=_roundedCorners - In the implementation block
-(CGRect)frame;
-(double)cornerRadius;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)style;
-(unsigned long long)roundedCorners;
-(id)textualRepresentation;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 radius:(double)arg3 roundedCorners:(unsigned long long)arg4 ;
@end
