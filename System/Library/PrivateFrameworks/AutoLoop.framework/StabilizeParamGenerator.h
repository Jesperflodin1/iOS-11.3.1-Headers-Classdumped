/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AutoLoop/AutoLoop-Structs.h>
@class AutoLoopStabilizer;

@interface StabilizeParamGenerator : NSObject {

	AutoLoopStabilizer* stabilizer;

}

@property (nonatomic,retain) AutoLoopStabilizer * stabilizer; 
-(id)initWithStabilizer:(id)arg1 ;
-(id)generateStabilizeParams;
-(void)GenerateIdentityHomographies:(HomographyRecordVector*)arg1 toStabilizeParams:(id)arg2 withImageBounds:(CGSize)arg3 firstFrameIndex:(unsigned long long)arg4 lastFrameIndex:(unsigned long long)arg5 ;
-(void)CopyCoordinateShiftedHomographies:(HomographyRecordVector*)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3 toStabilizeParams:(id)arg4 withImageBounds:(CGSize)arg5 ;
-(void)setStabilizer:(AutoLoopStabilizer *)arg1 ;
-(AutoLoopStabilizer *)stabilizer;
-(id)generatePassThruForAsset:(id)arg1 trimStart:(SCD_Struct_Pr1)arg2 trimLength:(SCD_Struct_Pr1)arg3 ;
@end
