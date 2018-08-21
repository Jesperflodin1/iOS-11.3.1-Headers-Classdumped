/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/Diagnostics/D22_D221.bundle/D22_D221
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <D22_D221/HDExperiment.h>

@class HSCapturePort, HSCaptureDevice, HSCaptureStream, NSString;

@interface HDPearlFaultExperiment : NSObject <HDExperiment> {

	HSCapturePort* _port;
	HSCaptureDevice* _device;
	HSCaptureStream* _stream;
	unsigned long long _formatIndex;
	unsigned long long _frameCount;
	double _timeout;

}

@property (assign,nonatomic) unsigned long long frameCount;               //@synthesize frameCount=_frameCount - In the implementation block
@property (assign,nonatomic) double timeout;                              //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) HSCapturePort * port;                        //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) HSCaptureDevice * device;                    //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) HSCaptureStream * stream;                    //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) unsigned long long formatIndex;              //@synthesize formatIndex=_formatIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCapturePort:(id)arg1 ;
-(void)setFormatIndex:(unsigned long long)arg1 ;
-(unsigned long long)formatIndex;
-(void)setTimeout:(double)arg1 ;
-(id)init;
-(void)setFrameCount:(unsigned long long)arg1 ;
-(unsigned long long)frameCount;
-(HSCapturePort *)port;
-(double)timeout;
-(void)setStream:(HSCaptureStream *)arg1 ;
-(HSCaptureDevice *)device;
-(id)experimentDescription;
-(BOOL)setupWithParameters:(id)arg1 host:(id)arg2 error:(id*)arg3 ;
-(BOOL)teardown:(id*)arg1 ;
-(id)run:(id*)arg1 ;
-(void)setDevice:(HSCaptureDevice *)arg1 ;
-(void)setPort:(HSCapturePort *)arg1 ;
-(HSCaptureStream *)stream;
@end

