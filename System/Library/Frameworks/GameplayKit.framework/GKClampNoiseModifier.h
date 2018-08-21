/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseModifier.h>

@interface GKClampNoiseModifier : GKNoiseModifier {

	double _lowerBound;
	double _upperBound;

}
-(id)init;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithLowerBound:(double)arg1 upperBound:(double)arg2 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
-(double)valueAt:;
@end

