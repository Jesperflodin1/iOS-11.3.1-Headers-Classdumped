/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebPluginManualLoader;
@class WebDataSource, WAKView;

@interface WebHTMLRepresentationPrivate : NSObject {

	WebDataSource* dataSource;
	BOOL hasSentResponseToPlugin;
	BOOL includedInWebKitStatistics;
	id<WebPluginManualLoader> manualLoader;
	WAKView* pluginView;

}
@end
