/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartShadowsSceneObject.h>

@interface TSCH3DChartPerspectiveShadowsSceneObject : TSCH3DChartShadowsSceneObject
+(id)blurParametersArray;
-(id)createShadowsRenderer;
-(id)createCamera;
-(void)updateShadowPlane:(id)arg1 texcoords:(id)arg2 scene:(id)arg3 blurslack:(float)arg4 angle:(float)arg5 quality:(float)arg6 planePadding:(box<glm::detail::tvec3<float> >)arg7 ;
-(void)updateCoordsAndTexcoords:(const box<glm::detail::tvec3<float> >*)arg1 camera:(id)arg2 quad:(id)arg3 texcoords:(id)arg4 ;
@end
