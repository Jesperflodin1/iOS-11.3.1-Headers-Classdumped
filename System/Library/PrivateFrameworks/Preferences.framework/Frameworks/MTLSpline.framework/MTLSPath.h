/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Frameworks/MTLSpline.framework/MTLSpline
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MTLSpline/MTLSpline-Structs.h>
@interface MTLSPath : NSObject {

	float _strokeWeight;
	vector<ControlPoint, std::__1::allocator<ControlPoint> >* _controlPointsVector;
	vector<PatchInfo, std::__1::allocator<PatchInfo> >* _patchInfoVector;
	vector<unsigned short, std::__1::allocator<unsigned short> >* _indicesVector;
	vector<InstanceInfo, std::__1::allocator<InstanceInfo> >* _instancesVector;
	vector<simd_float4x4, std::__1::allocator<simd_float4x4> >* _collapsedTransforms;

}

@property (readonly) ControlPoint* controlPoints; 
@property (readonly) unsigned long long controlPointsCount; 
@property (readonly) PatchInfoRef patchInfo; 
@property (readonly) unsigned long long patchInfoCount; 
@property (readonly) unsigned short* indices; 
@property (readonly) unsigned long long indicesCount; 
@property (readonly) InstanceInfo* instances; 
@property (readonly) unsigned long long instanceCount; 
-(void)clearInstances;
-(InstanceInfo*)instances;
-(ControlPoint*)controlPoints;
-(id)init;
-(void)appendInstances:(InstanceInfo*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithPoints:(1*)arg1 colors:(2*)arg2 count:(unsigned long long)arg3 strokeWeight:(float)arg4 pattern:(unsigned long long)arg5 rotation:(AxisAngle)arg6 ;
-(unsigned long long)controlPointsCount;
-(unsigned long long)indicesCount;
-(unsigned long long)instanceCount;
-(unsigned short*)indices;
-(id)initWithPoints:(1*)arg1 count:(unsigned long long)arg2 strokeWeight:(float)arg3 pattern:(unsigned long long)arg4 rotation:(AxisAngle)arg5 ;
-(void)collapseTransform:(SCD_Struct_MT13)arg1 ;
-(void)appendControlPoints:(ControlPoint*)arg1 count:(unsigned long long)arg2 ;
-(void)appendIndices:(unsigned short*)arg1 count:(unsigned long long)arg2 ;
-(PatchInfoRef)patchInfo;
-(unsigned long long)patchInfoCount;
-(void)appendPatchInfo:(PatchInfoRef)arg1 count:(unsigned long long)arg2 ;
-(void)genIndicesWithPattern:(unsigned long long)arg1 ;
-(void)genLeftCapWithWidth:(float)arg1 ;
-(void)genRightCapWithWidth:(float)arg1 ;
-(2)interpolateWithPoints:([4)arg1 t:(float)arg2 ;
-(2)interpolateTangentWithPoints:([4)arg1 t:(float)arg2 ;
-(unsigned long long)indicesVectorCount;
-(unsigned long long)controlPointsVectorCount;
-(unsigned long long)patchInfoVectorCount;
-(unsigned long long)instanceInfoVectorCount;
-(ControlPoint*)controlPointsVectorData;
-(PatchInfoRef)patchInfoVectorData;
-(unsigned short*)indicesVectorData;
-(InstanceInfo*)instanceInfoVectorData;
@end

