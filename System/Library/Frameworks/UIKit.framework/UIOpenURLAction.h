/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSURL;

@interface UIOpenURLAction : BSAction

@property (nonatomic,copy,readonly) NSURL * url; 
-(long long)UIActionType;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
@end

