/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWQRCodeSceneObserver.h>

@class NSArray, NSDictionary, NSString;

@interface BWMRCNode : BWNode <BWQRCodeSceneObserver> {

	/*function pointer*/void* _createSampleBufferProcessorFunction;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSArray* _symbologiesArray;
	NSArray* _mrcIdentifiers;
	long long _lastMRCCount;
	CGRect _rectOfInterest;
	BOOL _lowPowerModeEnabled;
	BOOL _usesSceneClassifierToGateQRCodeDetection;
	BOOL _sceneLikelyToHaveQRCodes;
	os_unfair_lock_s _sceneLock;
	BWSmartCameraScene _qrCodeScene;
	BWSmartCameraScene _documentScene;
	NSDictionary* _metadataIdentifierToSymbologyDictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(int)_setupSampleBufferProcessor;
-(BOOL)lowPowerModeEnabled;
-(void)setMrcIdentifiers:(id)arg1 ;
-(void)setUsesSceneClassifierToGateQRCodeDetection:(BOOL)arg1 ;
-(id)_newSymbologiesArrayFromIdentifiers:(id)arg1 ;
-(void)_teardownSampleBufferProcessor;
-(BOOL)_shouldEmitSBufForBarcodeCount:(long long)arg1 ;
-(void)sceneConfidenceDidChangeForQR:(float)arg1 document:(float)arg2 ;
-(id)mrcIdentifiers;
-(BOOL)usesSceneClassifierToGateQRCodeDetection;
-(CGRect)rectOfInterest;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(id)init;
-(void)dealloc;
-(id)nodeType;
-(void)setLowPowerModeEnabled:(BOOL)arg1 ;
@end
