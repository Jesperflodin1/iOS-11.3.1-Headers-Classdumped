/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DTexture.h>

@class TSDFill;

@interface TSCH3DTSDFillTexture : TSCH3DTexture {

	TSDFill* mFill;

}
+(id)textureWithTSDFill:(id)arg1 ;
-(id)databufferForDataCache:(id)arg1 ;
-(BOOL)hasCompleteData;
-(id)initWithTSDFill:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

