/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXVisibilityMonitor.h>
#import <libobjc.A.dylib/SXScrollObserving.h>

@class NSString;

@interface SXVideoComponentVisibilityMonitor : SXVisibilityMonitor <SXScrollObserving>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didScroll;
-(void)scrollingWillStart;
-(void)scrollingDidStop;
@end
