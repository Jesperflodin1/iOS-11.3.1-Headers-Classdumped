/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSgPTPFDEtEPort.h>

@interface TSgPTPUnicastUDPv6EtEPort : TSgPTPFDEtEPort
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv6Address:(char*)arg2 ;
-(long long)portType;
-(void)dealloc;
-(id)initWithService:(unsigned)arg1 ;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(id)sourceAddressString;
-(id)destinationAddressString;
-(id)initWithInterfaceName:(id)arg1 andIPv6Address:(char*)arg2 ;
@end

