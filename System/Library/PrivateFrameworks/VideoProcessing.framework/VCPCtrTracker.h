/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPBaseTracker.h>

@interface VCPCtrTracker : NSObject <VCPBaseTracker> {

	CGPoint* P;
	SCD_Struct_VC37* context;
	BOOL stable;
	BOOL lostTrack;
	float _confidence;

}

@property (assign) CGPoint* box; 
@property (assign) BOOL stableInd; 
@property (assign) BOOL lostTrackInd; 
@property (assign) float confidence;               //@synthesize confidence=_confidence - In the implementation block
-(id)init;
-(void)dealloc;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(void)setBox:(CGPoint*)arg1 ;
-(void)setupTrackerWithReferenceFrame:(CVBufferRef)arg1 withROI:(CGPoint*)arg2 ;
-(void)trackInFrame:(CVBufferRef)arg1 ;
-(BOOL)stableInd;
-(void)setStableInd:(BOOL)arg1 ;
-(BOOL)lostTrackInd;
-(void)setLostTrackInd:(BOOL)arg1 ;
-(CGPoint*)box;
@end

