/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/EmailAddressing.framework/EmailAddressing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailAddressing/EmailAddressing-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class EAEmailAddressSet;

@interface _EAEmailAddressSetEnumerator : NSEnumerator {

	EAEmailAddressSet* _set;
	SCD_Struct_EA2* _state;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_EA2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)nextObject;
-(id)initWithSet:(id)arg1 ;
@end
