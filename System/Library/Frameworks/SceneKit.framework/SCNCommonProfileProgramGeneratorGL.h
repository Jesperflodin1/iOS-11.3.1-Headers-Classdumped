/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNCommonProfileProgramGenerator.h>

@interface SCNCommonProfileProgramGeneratorGL : SCNCommonProfileProgramGenerator {

	int _profile;

}
-(id)init;
-(C3DFXProgramRef)_newProgramWithHashCode:(C3DRendererElementProgramHashCodeRef)arg1 engineContext:(C3DEngineContextRef)arg2 introspectionDataPtr:(void*)arg3 ;
-(id)initWithProfile:(int)arg1 ;
-(int)profile;
@end

