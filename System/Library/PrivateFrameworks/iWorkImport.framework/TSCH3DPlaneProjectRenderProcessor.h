/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTransformGeometryRenderProcessor.h>

@interface TSCH3DPlaneProjectRenderProcessor : TSCH3DTransformGeometryRenderProcessor {

	plane<glm::detail::tvec3<float> > mPlane;
	tvec3<float> mProjPt;
	box<glm::detail::tvec3<float> > mBounds;

}

@property (nonatomic,readonly) const box<glm::detail::tvec3<float> >* bounds; 
+(id)processorWithPlane:(const plane<glm::detail::tvec3<float> >*)arg1 projPt:(const tvec3<float>*)arg2 ;
-(id)initWithPlane:(const plane<glm::detail::tvec3<float> >*)arg1 projPt:(const tvec3<float>*)arg2 ;
-(const box<glm::detail::tvec3<float> >*)bounds;
-(void)submit:(const PrimitiveInfo*)arg1 ;
@end

