/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DNormalDirectionMapper;

@interface TSCH3DTexCoordGeneration : NSObject {

	tmat4x4<float> mTransform;
	TSCH3DNormalDirectionMapper* mNormalDirectionMapper;

}

@property (nonatomic,retain) TSCH3DNormalDirectionMapper * normalDirectionMapper; 
-(void)setNormalDirectionMapper:(TSCH3DNormalDirectionMapper *)arg1 ;
-(TSCH3DNormalDirectionMapper *)normalDirectionMapper;
-(id)initWithTransform:(const tmat4x4<float>*)arg1 ;
-(id)init;
-(void)dealloc;
@end
