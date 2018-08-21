/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMFitnessMachineInternal;

@interface CMFitnessMachine : NSObject {

	CMFitnessMachineInternal* _internal;

}

@property (nonatomic,readonly) CMFitnessMachineInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(CMFitnessMachineInternal *)_internal;
-(id)init;
-(void)dealloc;
-(void)feedFitnessMachineData:(id)arg1 ;
@end

