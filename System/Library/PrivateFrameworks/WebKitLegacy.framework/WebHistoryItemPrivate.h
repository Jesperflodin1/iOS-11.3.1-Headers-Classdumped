/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@interface WebHistoryItemPrivate : NSObject {

	RefPtr<WebCore::HistoryItem, WTF::DumbPtrTraits<WebCore::HistoryItem> >* _historyItem;
	double _lastVisitedTime;
	unique_ptr<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>, std::__1::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> > >* _redirectURLs;

}
@end
