/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SiriUIConfiguration : NSObject <NSCopying> {

	BOOL _isSystemHostedPresentation;
	int _flamesViewFidelity;

}

@property (nonatomic,readonly) int flamesViewFidelity;                       //@synthesize flamesViewFidelity=_flamesViewFidelity - In the implementation block
@property (nonatomic,readonly) BOOL isSystemHostedPresentation;              //@synthesize isSystemHostedPresentation=_isSystemHostedPresentation - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)flamesViewFidelity;
-(id)initWithFlamesViewFidelity:(int)arg1 isSystemHostedPresentation:(BOOL)arg2 ;
-(BOOL)isSystemHostedPresentation;
@end

