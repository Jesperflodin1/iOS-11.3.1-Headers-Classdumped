/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MDLTransformOp
@property (nonatomic,readonly) NSString * name; 
@required
-(NSString *)name;
-(/*function pointer*/void**)float4x4AtTime:(double)arg1;
-(/*function pointer*/void**)double4x4AtTime:(double)arg1;
-(BOOL)IsInverseOp;

@end

