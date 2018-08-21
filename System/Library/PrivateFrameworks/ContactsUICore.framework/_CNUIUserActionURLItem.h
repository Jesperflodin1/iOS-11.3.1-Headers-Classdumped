/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUICore/CNUIUserActionItem.h>

@class CNFuture;

@interface _CNUIUserActionURLItem : CNUIUserActionItem {

	BOOL _isSensitive;
	CNFuture* _url;

}

@property (nonatomic,readonly) CNFuture * url;                //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL isSensitive;              //@synthesize isSensitive=_isSensitive - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CNFuture *)url;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 isSensitive:(BOOL)arg5 group:(long long)arg6 options:(unsigned long long)arg7 ;
-(BOOL)isSensitive;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
-(id)performActionWithContext:(id)arg1 ;
@end

