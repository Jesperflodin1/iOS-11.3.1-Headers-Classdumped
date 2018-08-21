/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SiriUI/SiriUI-Structs.h>
@interface SiriUIComponentConstraintFactory : NSObject {

	NSMutableDictionary* _layoutStyleToComponentLayoutMaps;

}
+(id)sharedConstraintFactory;
-(id)init;
-(id)topConstraintForView:(id)arg1 fromLayoutGuide:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4 ;
-(id)bottomConstraintForView:(id)arg1 fromLayoutGuide:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4 ;
-(id)verticalConstraintFromUpperView:(id)arg1 lowerView:(id)arg2 upperTemplateComponent:(id)arg3 lowerTemplateComponent:(id)arg4 layoutStyle:(long long)arg5 ;
-(void)_setupMaps;
-(NSMutableDictionary*)_createMapForLayoutStyle:(long long)arg1 ;
-(void)_addConstants:(NSDictionary*)arg1 forLowerComponentStyle:(unsigned long long)arg2 toMap:(NSMutableDictionary*)arg3 ;
-(unsigned long long)_componentTypeForView:(id)arg1 component:(id)arg2 ;
-(long long)_layoutAttributeForView:(id)arg1 componentType:(unsigned long long)arg2 isLower:(BOOL)arg3 ;
-(id)_bestDistanceFromComponentType:(unsigned long long)arg1 toComponentType:(unsigned long long)arg2 layoutStyle:(long long)arg3 ;
-(id)topConstraintForView:(id)arg1 inSuperview:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4 ;
-(id)bottomConstraintForView:(id)arg1 inSuperview:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4 ;
@end

