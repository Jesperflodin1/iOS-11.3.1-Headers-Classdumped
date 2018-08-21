/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary;

@interface CIRectangleDetector : CIDetector {

	CIContext* context;
	double _width;
	double _height;
	NSMutableDictionary* featureOptions;
	OpaqueVTPixelTransferSessionRef pixelTransferSession;
	CVBufferRef interimScaleBuffer;
	CVBufferRef scaleBuffer;
	SCD_Struct_CI49* CVMLFuncs;
	float* _perMeshPtr;
	vImage_Buffer* _internalBuffer;

}

@property (nonatomic,retain) CIContext * context; 
-(void)releaseResources;
-(void)dealloc;
-(CIContext *)context;
-(void)setContext:(CIContext *)arg1 ;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 ;
-(void)finalize;
@end
