/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TPPageLayoutInfoProvider <NSObject>
@required
-(BOOL)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1;
-(BOOL)canProvideInfoForPageIndex:(unsigned long long)arg1;
-(id)headerFooterProviderForPageIndex:(unsigned long long)arg1;
-(id)masterDrawableProviderForPageIndex:(unsigned long long)arg1;
-(unsigned long long)contentFlagsForPageIndex:(unsigned long long)arg1;
-(unsigned long long)pageNumberForPageIndex:(unsigned long long)arg1;
-(unsigned long long)pageCountForPageIndex:(unsigned long long)arg1;
-(BOOL)canProvideNumberingInfoForPageIndex:(unsigned long long)arg1;
-(id)displayPageNumberForPageIndex:(unsigned long long)arg1;
-(id)pageNumberFormatForSectionOnPageIndex:(unsigned long long)arg1;
-(id)displayPageNumberForCharIndex:(unsigned long long)arg1;

@end

