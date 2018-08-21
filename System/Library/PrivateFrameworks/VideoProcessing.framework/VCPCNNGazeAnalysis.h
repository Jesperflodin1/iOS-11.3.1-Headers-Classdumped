/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNModel, VCPCNNData;

@interface VCPCNNGazeAnalysis : NSObject {

	VCPCNNModel* _modelLandmarks;
	VCPCNNModel* _modelEyeOpenness;
	VCPCNNData* _faceInput;
	VCPCNNData* _eyeInput;

}
-(id)init;
-(int)initLandmarkModel;
-(int)initEyeOpennessModel;
-(int)cropAndRotateEyeImage:(CVBufferRef)arg1 leftCornerX:(int)arg2 leftCornerY:(int)arg3 rightCornerX:(int)arg4 rightCornerY:(int)arg5 ;
-(int)detectEyeOpennessForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 eyeOpenness:(BOOL*)arg3 ;
@end
