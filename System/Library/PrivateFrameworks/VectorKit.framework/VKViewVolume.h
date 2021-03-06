/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKViewVolume : NSObject {

	Matrix<double, 3, 1> _corners[8];

}

@property (nonatomic,readonly) const Matrix<double* corners; 
-(const Matrix<double*)corners;
-(void)updateWithFrustum:(SCD_Struct_VK25)arg1 matrix:(const Matrix<double, 4, 4>*)arg2 ;
-(Matrix<double, 3, 1>)lerpPoint:(float*)arg1 ;
@end

