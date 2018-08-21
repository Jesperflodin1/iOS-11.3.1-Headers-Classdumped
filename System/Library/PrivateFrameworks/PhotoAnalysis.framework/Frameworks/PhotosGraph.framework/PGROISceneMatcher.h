/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PGROISceneMatcher : NSObject {

	NSMutableDictionary* _positiveSceneIdentifiersByROILabels;
	NSMutableDictionary* _negativeSceneIdentifiersByROILabels;

}
+(id)beachSceneNames;
+(id)mountainSceneNames;
+(id)natureSceneNames;
+(id)waterSceneNames;
+(id)urbanSceneNames;
+(id)nonNatureSceneNames;
+(id)nonWaterSceneNames;
+(id)positiveSceneNamesByROILabel;
+(id)negativeSceneNamesByROILabel;
+(id)sharedROISceneMatcher;
-(id)_sceneIdentifierFromSceneNames:(id)arg1 ;
-(id)positiveSceneIdentifiersForROILabel:(id)arg1 ;
-(id)negativeSceneIdentifiersForROILabel:(id)arg1 ;
@end
