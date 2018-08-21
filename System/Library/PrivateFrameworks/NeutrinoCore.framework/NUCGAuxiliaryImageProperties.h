/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUDepthProperties.h>

@class NSString, AVDepthData, NSDictionary;

@interface NUCGAuxiliaryImageProperties : NSObject <NUDepthProperties> {

	id _imageSource;
	NSString* _auxiliaryType;
	AVDepthData* _depthData;
	NSDictionary* _auxiliaryData;
	SCD_Struct_NU5 _size;

}

@property (retain) AVDepthData * depthData;                         //@synthesize depthData=_depthData - In the implementation block
@property (retain) NSDictionary * auxiliaryData;                    //@synthesize auxiliaryData=_auxiliaryData - In the implementation block
@property (copy) NSString * auxiliaryType;                          //@synthesize auxiliaryType=_auxiliaryType - In the implementation block
@property (assign) SCD_Struct_NU5 size;                             //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * depthType; 
-(NSString *)depthType;
-(SCD_Struct_NU5)size;
-(void)setSize:(SCD_Struct_NU5)arg1 ;
-(NSString *)description;
-(void)setAuxiliaryData:(NSDictionary *)arg1 ;
-(AVDepthData *)depthData;
-(NSDictionary *)auxiliaryData;
-(id)depthData:(out id*)arg1 ;
-(id)auxiliaryData:(out id*)arg1 ;
-(NSString *)auxiliaryType;
-(id)initWitProperties:(id)arg1 imageSource:(CGImageSourceRef)arg2 ;
-(void)setDepthData:(AVDepthData *)arg1 ;
-(void)setAuxiliaryType:(NSString *)arg1 ;
@end

