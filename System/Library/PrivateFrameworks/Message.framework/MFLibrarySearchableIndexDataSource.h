/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFLibrarySearchableIndexDataSource <NSObject>
@required
-(id)searchableIndex:(id)arg1 assignTransaction:(long long)arg2 updates:(id)arg3;
-(void)searchableIndex:(id)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;
-(id)updatesForSearchableIndex:(id)arg1 count:(unsigned long long)arg2;
-(id)verificationDataSamplesForSearchableIndex:(id)arg1;

@end

