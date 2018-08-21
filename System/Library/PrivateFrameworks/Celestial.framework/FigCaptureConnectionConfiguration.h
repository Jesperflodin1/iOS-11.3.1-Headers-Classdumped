/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FigCaptureSourceConfiguration, FigCaptureSinkConfiguration, FigCaptureIrisSinkConfiguration, FigCaptureStillImageSinkConfiguration, FigCaptureVideoDataSinkConfiguration, FigCaptureVideoPreviewSinkConfiguration, FigCaptureDepthDataSinkConfiguration, FigCaptureVideoThumbnailSinkConfiguration;

@interface FigCaptureConnectionConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSString* _connectionID;
	unsigned _mediaType;
	FigCaptureSourceConfiguration* _sourceConfiguration;
	FigCaptureSinkConfiguration* _sinkConfiguration;
	BOOL _enabled;

}

@property (nonatomic,copy) NSString * connectionID;                                                        //@synthesize connectionID=_connectionID - In the implementation block
@property (assign,nonatomic) unsigned mediaType;                                                           //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * sourceConfiguration;                          //@synthesize sourceConfiguration=_sourceConfiguration - In the implementation block
@property (nonatomic,retain) FigCaptureSinkConfiguration * sinkConfiguration;                              //@synthesize sinkConfiguration=_sinkConfiguration - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                                 //@synthesize enabled=_enabled - In the implementation block
@property (readonly) FigCaptureIrisSinkConfiguration * irisSinkConfiguration; 
@property (readonly) FigCaptureStillImageSinkConfiguration * stillImageSinkConfiguration; 
@property (readonly) FigCaptureVideoDataSinkConfiguration * videoDataSinkConfiguration; 
@property (readonly) FigCaptureVideoPreviewSinkConfiguration * videoPreviewSinkConfiguration; 
@property (readonly) FigCaptureDepthDataSinkConfiguration * depthDataSinkConfiguration; 
@property (readonly) FigCaptureVideoThumbnailSinkConfiguration * thumbnailSinkConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FigCaptureSourceConfiguration *)sourceConfiguration;
-(void)setSourceConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(FigCaptureSinkConfiguration *)sinkConfiguration;
-(NSString *)connectionID;
-(FigCaptureVideoDataSinkConfiguration *)videoDataSinkConfiguration;
-(FigCaptureVideoPreviewSinkConfiguration *)videoPreviewSinkConfiguration;
-(FigCaptureIrisSinkConfiguration *)irisSinkConfiguration;
-(FigCaptureDepthDataSinkConfiguration *)depthDataSinkConfiguration;
-(FigCaptureStillImageSinkConfiguration *)stillImageSinkConfiguration;
-(FigCaptureVideoThumbnailSinkConfiguration *)thumbnailSinkConfiguration;
-(void)setConnectionID:(NSString *)arg1 ;
-(void)setSinkConfiguration:(FigCaptureSinkConfiguration *)arg1 ;
-(id)init;
-(BOOL)enabled;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)mediaType;
-(void)setMediaType:(unsigned)arg1 ;
@end

