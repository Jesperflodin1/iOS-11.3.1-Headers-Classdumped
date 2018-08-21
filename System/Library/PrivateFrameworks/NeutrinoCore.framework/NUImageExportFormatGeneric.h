/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageExportFormat.h>

@class NSString, NSDictionary;

@interface NUImageExportFormatGeneric : NUImageExportFormat {

	int _renderFormat;
	NSString* _fileType;
	NSDictionary* _options;

}

@property (copy) NSString * fileType;                 //@synthesize fileType=_fileType - In the implementation block
@property (assign) int renderFormat;                  //@synthesize renderFormat=_renderFormat - In the implementation block
@property (copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(id)initWithFileType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)fileType;
-(NSDictionary *)options;
-(void)setFileType:(NSString *)arg1 ;
-(int)renderFormat;
-(void)addImageDestinationOptionsToImageProperties:(id)arg1 ;
-(void)setRenderFormat:(int)arg1 ;
@end

