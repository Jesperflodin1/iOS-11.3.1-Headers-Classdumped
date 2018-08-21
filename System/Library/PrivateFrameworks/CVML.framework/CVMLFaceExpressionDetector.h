/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVML-Structs.h>
#import <CVML/CVMLDetector.h>

@protocol CVMLModelFile;
@interface CVMLFaceExpressionDetector : CVMLDetector {

	shared_ptr<vision::mod::LandmarkAttributes>* m_FaceAttributesImpl;
	id<CVMLModelFile> m_LandmarkRefinerModelFileHandle;

}
+(int)expressionTypeFromString:(id)arg1 ;
+(id)createExpressionAndConfidencesDictionaryFromScores:(id)arg1 ;
+(id)createExpressionDetectionDictionaryFromScores:(id)arg1 ;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
@end

