/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIStatusBarAction.h>

@interface _UIStatusBarSystemNavigationAction : _UIStatusBarAction {

	unsigned long long _destination;

}

@property (assign,nonatomic) unsigned long long destination;              //@synthesize destination=_destination - In the implementation block
+(id)_navigationActionForDestination:(unsigned long long)arg1 ;
+(id)backNavigationAction;
+(id)forwardNavigationAction;
-(unsigned long long)destination;
-(void)setDestination:(unsigned long long)arg1 ;
@end

