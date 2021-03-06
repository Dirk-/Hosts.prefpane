//    Hosts, a system preference pane to manage your hosts file.
//    Copyright (C) 2011  PermanentMarkers
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//    contact maintainer at hosts@permanentmarkers.nl

#import <Foundation/Foundation.h>
#import "pm/auth/NLPERMANENTMARKERSHOSTSAuthorization.h"

@interface NLPERMANENTMARKERSHOSTSFileWriter : NSObject {
@private
    NLPERMANENTMARKERSHOSTSAuthorization *authorization;
}

+ (void) backupHostsFileWithExtension:(NSString *) extension;
- (void) writeHostEntries:(NSArray *) hostEntries;

@end
