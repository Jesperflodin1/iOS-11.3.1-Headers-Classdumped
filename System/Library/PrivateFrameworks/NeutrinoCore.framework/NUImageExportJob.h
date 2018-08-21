/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUExportJob.h>

@class NSData;

@interface NUImageExportJob : NUExportJob {

	NSData* _destinationData;

}
-(void)cleanUp;
-(id)result;
-(id)initWithExportRequest:(id)arg1 ;
-(BOOL)wantsOutputGeometry;
-(id)initWithImageExportRequest:(id)arg1 ;
-(BOOL)wantsOutputImage;
-(id)newRenderPipelineStateForEvaluationMode:(long long)arg1 ;
-(id)imageExportRequest;
-(id)_filterProperties:(id)arg1 ;
-(id)imageDestinationOptions;
-(BOOL)render:(out id*)arg1 ;
@end
