/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSArray;

@interface UISystemNavigationAction : BSAction {

	NSArray* _destinations;

}

@property (nonatomic,readonly) NSArray * destinations;              //@synthesize destinations=_destinations - In the implementation block
-(long long)UIActionType;
-(id)titleForDestination:(unsigned long long)arg1 ;
-(id)URLForDestination:(unsigned long long)arg1 ;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)sendResponseForDestination:(unsigned long long)arg1 ;
-(id)initWithDestinationContexts:(id)arg1 forResponseOnQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)_destinationContextForResponseDestination:(unsigned long long)arg1 ;
-(NSArray *)destinations;
-(id)bundleIdForDestination:(unsigned long long)arg1 ;
@end

