/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "sfm_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace vision { namespace sfm { namespace gen {

int _kRollingShutterValues[] = {
  RollingShutter::HORIZONTAL,
  RollingShutter::VERTICAL
};
const char* _kRollingShutterNames[] = {
  "HORIZONTAL",
  "VERTICAL"
};
const std::map<int, const char*> _RollingShutter_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kRollingShutterValues, _kRollingShutterNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));


Observation::~Observation() throw() {
}


void Observation::__set_x(const double val) {
  this->x = val;
}

void Observation::__set_y(const double val) {
  this->y = val;
}

void Observation::__set_descriptor(const std::string& val) {
  this->descriptor = val;
__isset.descriptor = true;
}

void Observation::__set_color(const std::string& val) {
  this->color = val;
__isset.color = true;
}

void Observation::__set_matches(const std::vector<ObservationRef> & val) {
  this->matches = val;
__isset.matches = true;
}

void Observation::__set_track(const int32_t val) {
  this->track = val;
__isset.track = true;
}

uint32_t Observation::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->x);
          this->__isset.x = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->y);
          this->__isset.y = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->descriptor);
          this->__isset.descriptor = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->color);
          this->__isset.color = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->matches.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->matches.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += this->matches[_i4].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.matches = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->track);
          this->__isset.track = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Observation::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Observation");

  xfer += oprot->writeFieldBegin("x", ::apache::thrift::protocol::T_DOUBLE, 1);
  xfer += oprot->writeDouble(this->x);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("y", ::apache::thrift::protocol::T_DOUBLE, 2);
  xfer += oprot->writeDouble(this->y);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.descriptor) {
    xfer += oprot->writeFieldBegin("descriptor", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeBinary(this->descriptor);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.color) {
    xfer += oprot->writeFieldBegin("color", ::apache::thrift::protocol::T_STRING, 4);
    xfer += oprot->writeBinary(this->color);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.matches) {
    xfer += oprot->writeFieldBegin("matches", ::apache::thrift::protocol::T_LIST, 5);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->matches.size()));
      std::vector<ObservationRef> ::const_iterator _iter5;
      for (_iter5 = this->matches.begin(); _iter5 != this->matches.end(); ++_iter5)
      {
        xfer += (*_iter5).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.track) {
    xfer += oprot->writeFieldBegin("track", ::apache::thrift::protocol::T_I32, 6);
    xfer += oprot->writeI32(this->track);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Observation &a, Observation &b) {
  using ::std::swap;
  swap(a.x, b.x);
  swap(a.y, b.y);
  swap(a.descriptor, b.descriptor);
  swap(a.color, b.color);
  swap(a.matches, b.matches);
  swap(a.track, b.track);
  swap(a.__isset, b.__isset);
}

Observation::Observation(const Observation& other6) {
  x = other6.x;
  y = other6.y;
  descriptor = other6.descriptor;
  color = other6.color;
  matches = other6.matches;
  track = other6.track;
  __isset = other6.__isset;
}
Observation& Observation::operator=(const Observation& other7) {
  x = other7.x;
  y = other7.y;
  descriptor = other7.descriptor;
  color = other7.color;
  matches = other7.matches;
  track = other7.track;
  __isset = other7.__isset;
  return *this;
}
void Observation::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Observation(";
  out << "x=" << to_string(x);
  out << ", " << "y=" << to_string(y);
  out << ", " << "descriptor="; (__isset.descriptor ? (out << to_string(descriptor)) : (out << "<null>"));
  out << ", " << "color="; (__isset.color ? (out << to_string(color)) : (out << "<null>"));
  out << ", " << "matches="; (__isset.matches ? (out << to_string(matches)) : (out << "<null>"));
  out << ", " << "track="; (__isset.track ? (out << to_string(track)) : (out << "<null>"));
  out << ")";
}


Track::~Track() throw() {
}


void Track::__set_obs(const std::vector<ObservationRef> & val) {
  this->obs = val;
}

void Track::__set_pt(const std::vector<double> & val) {
  this->pt = val;
__isset.pt = true;
}

void Track::__set_color(const std::string& val) {
  this->color = val;
__isset.color = true;
}

void Track::__set_valid(const bool val) {
  this->valid = val;
}

uint32_t Track::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->obs.clear();
            uint32_t _size8;
            ::apache::thrift::protocol::TType _etype11;
            xfer += iprot->readListBegin(_etype11, _size8);
            this->obs.resize(_size8);
            uint32_t _i12;
            for (_i12 = 0; _i12 < _size8; ++_i12)
            {
              xfer += this->obs[_i12].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.obs = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->pt.clear();
            uint32_t _size13;
            ::apache::thrift::protocol::TType _etype16;
            xfer += iprot->readListBegin(_etype16, _size13);
            this->pt.resize(_size13);
            uint32_t _i17;
            for (_i17 = 0; _i17 < _size13; ++_i17)
            {
              xfer += iprot->readDouble(this->pt[_i17]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.pt = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->color);
          this->__isset.color = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->valid);
          this->__isset.valid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Track::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Track");

  xfer += oprot->writeFieldBegin("obs", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->obs.size()));
    std::vector<ObservationRef> ::const_iterator _iter18;
    for (_iter18 = this->obs.begin(); _iter18 != this->obs.end(); ++_iter18)
    {
      xfer += (*_iter18).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  if (this->__isset.pt) {
    xfer += oprot->writeFieldBegin("pt", ::apache::thrift::protocol::T_LIST, 2);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_DOUBLE, static_cast<uint32_t>(this->pt.size()));
      std::vector<double> ::const_iterator _iter19;
      for (_iter19 = this->pt.begin(); _iter19 != this->pt.end(); ++_iter19)
      {
        xfer += oprot->writeDouble((*_iter19));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.color) {
    xfer += oprot->writeFieldBegin("color", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeBinary(this->color);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("valid", ::apache::thrift::protocol::T_BOOL, 4);
  xfer += oprot->writeBool(this->valid);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Track &a, Track &b) {
  using ::std::swap;
  swap(a.obs, b.obs);
  swap(a.pt, b.pt);
  swap(a.color, b.color);
  swap(a.valid, b.valid);
  swap(a.__isset, b.__isset);
}

Track::Track(const Track& other20) {
  obs = other20.obs;
  pt = other20.pt;
  color = other20.color;
  valid = other20.valid;
  __isset = other20.__isset;
}
Track& Track::operator=(const Track& other21) {
  obs = other21.obs;
  pt = other21.pt;
  color = other21.color;
  valid = other21.valid;
  __isset = other21.__isset;
  return *this;
}
void Track::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Track(";
  out << "obs=" << to_string(obs);
  out << ", " << "pt="; (__isset.pt ? (out << to_string(pt)) : (out << "<null>"));
  out << ", " << "color="; (__isset.color ? (out << to_string(color)) : (out << "<null>"));
  out << ", " << "valid=" << to_string(valid);
  out << ")";
}


ObservationRef::~ObservationRef() throw() {
}


void ObservationRef::__set_frame(const int32_t val) {
  this->frame = val;
}

void ObservationRef::__set_obs(const int32_t val) {
  this->obs = val;
}

void ObservationRef::__set_valid(const bool val) {
  this->valid = val;
}

uint32_t ObservationRef::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->frame);
          this->__isset.frame = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->obs);
          this->__isset.obs = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->valid);
          this->__isset.valid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ObservationRef::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ObservationRef");

  xfer += oprot->writeFieldBegin("frame", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->frame);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("obs", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->obs);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("valid", ::apache::thrift::protocol::T_BOOL, 3);
  xfer += oprot->writeBool(this->valid);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ObservationRef &a, ObservationRef &b) {
  using ::std::swap;
  swap(a.frame, b.frame);
  swap(a.obs, b.obs);
  swap(a.valid, b.valid);
  swap(a.__isset, b.__isset);
}

ObservationRef::ObservationRef(const ObservationRef& other22) {
  frame = other22.frame;
  obs = other22.obs;
  valid = other22.valid;
  __isset = other22.__isset;
}
ObservationRef& ObservationRef::operator=(const ObservationRef& other23) {
  frame = other23.frame;
  obs = other23.obs;
  valid = other23.valid;
  __isset = other23.__isset;
  return *this;
}
void ObservationRef::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ObservationRef(";
  out << "frame=" << to_string(frame);
  out << ", " << "obs=" << to_string(obs);
  out << ", " << "valid=" << to_string(valid);
  out << ")";
}


Frame::~Frame() throw() {
}


void Frame::__set_obs(const std::vector<Observation> & val) {
  this->obs = val;
}

void Frame::__set_poses(const std::vector<std::vector<double> > & val) {
  this->poses = val;
__isset.poses = true;
}

void Frame::__set_cam(const std::vector<double> & val) {
  this->cam = val;
__isset.cam = true;
}

void Frame::__set_priorPoses(const std::vector<std::vector<double> > & val) {
  this->priorPoses = val;
__isset.priorPoses = true;
}

uint32_t Frame::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->obs.clear();
            uint32_t _size24;
            ::apache::thrift::protocol::TType _etype27;
            xfer += iprot->readListBegin(_etype27, _size24);
            this->obs.resize(_size24);
            uint32_t _i28;
            for (_i28 = 0; _i28 < _size24; ++_i28)
            {
              xfer += this->obs[_i28].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.obs = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->poses.clear();
            uint32_t _size29;
            ::apache::thrift::protocol::TType _etype32;
            xfer += iprot->readListBegin(_etype32, _size29);
            this->poses.resize(_size29);
            uint32_t _i33;
            for (_i33 = 0; _i33 < _size29; ++_i33)
            {
              {
                this->poses[_i33].clear();
                uint32_t _size34;
                ::apache::thrift::protocol::TType _etype37;
                xfer += iprot->readListBegin(_etype37, _size34);
                this->poses[_i33].resize(_size34);
                uint32_t _i38;
                for (_i38 = 0; _i38 < _size34; ++_i38)
                {
                  xfer += iprot->readDouble(this->poses[_i33][_i38]);
                }
                xfer += iprot->readListEnd();
              }
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.poses = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->cam.clear();
            uint32_t _size39;
            ::apache::thrift::protocol::TType _etype42;
            xfer += iprot->readListBegin(_etype42, _size39);
            this->cam.resize(_size39);
            uint32_t _i43;
            for (_i43 = 0; _i43 < _size39; ++_i43)
            {
              xfer += iprot->readDouble(this->cam[_i43]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.cam = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->priorPoses.clear();
            uint32_t _size44;
            ::apache::thrift::protocol::TType _etype47;
            xfer += iprot->readListBegin(_etype47, _size44);
            this->priorPoses.resize(_size44);
            uint32_t _i48;
            for (_i48 = 0; _i48 < _size44; ++_i48)
            {
              {
                this->priorPoses[_i48].clear();
                uint32_t _size49;
                ::apache::thrift::protocol::TType _etype52;
                xfer += iprot->readListBegin(_etype52, _size49);
                this->priorPoses[_i48].resize(_size49);
                uint32_t _i53;
                for (_i53 = 0; _i53 < _size49; ++_i53)
                {
                  xfer += iprot->readDouble(this->priorPoses[_i48][_i53]);
                }
                xfer += iprot->readListEnd();
              }
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.priorPoses = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Frame::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Frame");

  xfer += oprot->writeFieldBegin("obs", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->obs.size()));
    std::vector<Observation> ::const_iterator _iter54;
    for (_iter54 = this->obs.begin(); _iter54 != this->obs.end(); ++_iter54)
    {
      xfer += (*_iter54).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  if (this->__isset.poses) {
    xfer += oprot->writeFieldBegin("poses", ::apache::thrift::protocol::T_LIST, 2);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_LIST, static_cast<uint32_t>(this->poses.size()));
      std::vector<std::vector<double> > ::const_iterator _iter55;
      for (_iter55 = this->poses.begin(); _iter55 != this->poses.end(); ++_iter55)
      {
        {
          xfer += oprot->writeListBegin(::apache::thrift::protocol::T_DOUBLE, static_cast<uint32_t>((*_iter55).size()));
          std::vector<double> ::const_iterator _iter56;
          for (_iter56 = (*_iter55).begin(); _iter56 != (*_iter55).end(); ++_iter56)
          {
            xfer += oprot->writeDouble((*_iter56));
          }
          xfer += oprot->writeListEnd();
        }
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.cam) {
    xfer += oprot->writeFieldBegin("cam", ::apache::thrift::protocol::T_LIST, 3);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_DOUBLE, static_cast<uint32_t>(this->cam.size()));
      std::vector<double> ::const_iterator _iter57;
      for (_iter57 = this->cam.begin(); _iter57 != this->cam.end(); ++_iter57)
      {
        xfer += oprot->writeDouble((*_iter57));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.priorPoses) {
    xfer += oprot->writeFieldBegin("priorPoses", ::apache::thrift::protocol::T_LIST, 4);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_LIST, static_cast<uint32_t>(this->priorPoses.size()));
      std::vector<std::vector<double> > ::const_iterator _iter58;
      for (_iter58 = this->priorPoses.begin(); _iter58 != this->priorPoses.end(); ++_iter58)
      {
        {
          xfer += oprot->writeListBegin(::apache::thrift::protocol::T_DOUBLE, static_cast<uint32_t>((*_iter58).size()));
          std::vector<double> ::const_iterator _iter59;
          for (_iter59 = (*_iter58).begin(); _iter59 != (*_iter58).end(); ++_iter59)
          {
            xfer += oprot->writeDouble((*_iter59));
          }
          xfer += oprot->writeListEnd();
        }
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Frame &a, Frame &b) {
  using ::std::swap;
  swap(a.obs, b.obs);
  swap(a.poses, b.poses);
  swap(a.cam, b.cam);
  swap(a.priorPoses, b.priorPoses);
  swap(a.__isset, b.__isset);
}

Frame::Frame(const Frame& other60) {
  obs = other60.obs;
  poses = other60.poses;
  cam = other60.cam;
  priorPoses = other60.priorPoses;
  __isset = other60.__isset;
}
Frame& Frame::operator=(const Frame& other61) {
  obs = other61.obs;
  poses = other61.poses;
  cam = other61.cam;
  priorPoses = other61.priorPoses;
  __isset = other61.__isset;
  return *this;
}
void Frame::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Frame(";
  out << "obs=" << to_string(obs);
  out << ", " << "poses="; (__isset.poses ? (out << to_string(poses)) : (out << "<null>"));
  out << ", " << "cam="; (__isset.cam ? (out << to_string(cam)) : (out << "<null>"));
  out << ", " << "priorPoses="; (__isset.priorPoses ? (out << to_string(priorPoses)) : (out << "<null>"));
  out << ")";
}


Session::~Session() throw() {
}


void Session::__set_cam(const std::vector<double> & val) {
  this->cam = val;
}

void Session::__set_frames(const std::vector<Frame> & val) {
  this->frames = val;
}

void Session::__set_tracks(const std::vector<Track> & val) {
  this->tracks = val;
}

void Session::__set_rs(const RollingShutter::type val) {
  this->rs = val;
__isset.rs = true;
}

void Session::__set_scanlines(const std::vector<int32_t> & val) {
  this->scanlines = val;
__isset.scanlines = true;
}

void Session::__set_width(const int32_t val) {
  this->width = val;
}

void Session::__set_height(const int32_t val) {
  this->height = val;
}

uint32_t Session::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->cam.clear();
            uint32_t _size62;
            ::apache::thrift::protocol::TType _etype65;
            xfer += iprot->readListBegin(_etype65, _size62);
            this->cam.resize(_size62);
            uint32_t _i66;
            for (_i66 = 0; _i66 < _size62; ++_i66)
            {
              xfer += iprot->readDouble(this->cam[_i66]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.cam = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->frames.clear();
            uint32_t _size67;
            ::apache::thrift::protocol::TType _etype70;
            xfer += iprot->readListBegin(_etype70, _size67);
            this->frames.resize(_size67);
            uint32_t _i71;
            for (_i71 = 0; _i71 < _size67; ++_i71)
            {
              xfer += this->frames[_i71].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.frames = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->tracks.clear();
            uint32_t _size72;
            ::apache::thrift::protocol::TType _etype75;
            xfer += iprot->readListBegin(_etype75, _size72);
            this->tracks.resize(_size72);
            uint32_t _i76;
            for (_i76 = 0; _i76 < _size72; ++_i76)
            {
              xfer += this->tracks[_i76].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.tracks = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast77;
          xfer += iprot->readI32(ecast77);
          this->rs = (RollingShutter::type)ecast77;
          this->__isset.rs = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->scanlines.clear();
            uint32_t _size78;
            ::apache::thrift::protocol::TType _etype81;
            xfer += iprot->readListBegin(_etype81, _size78);
            this->scanlines.resize(_size78);
            uint32_t _i82;
            for (_i82 = 0; _i82 < _size78; ++_i82)
            {
              xfer += iprot->readI32(this->scanlines[_i82]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.scanlines = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->width);
          this->__isset.width = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->height);
          this->__isset.height = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Session::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Session");

  xfer += oprot->writeFieldBegin("cam", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_DOUBLE, static_cast<uint32_t>(this->cam.size()));
    std::vector<double> ::const_iterator _iter83;
    for (_iter83 = this->cam.begin(); _iter83 != this->cam.end(); ++_iter83)
    {
      xfer += oprot->writeDouble((*_iter83));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("frames", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->frames.size()));
    std::vector<Frame> ::const_iterator _iter84;
    for (_iter84 = this->frames.begin(); _iter84 != this->frames.end(); ++_iter84)
    {
      xfer += (*_iter84).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("tracks", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->tracks.size()));
    std::vector<Track> ::const_iterator _iter85;
    for (_iter85 = this->tracks.begin(); _iter85 != this->tracks.end(); ++_iter85)
    {
      xfer += (*_iter85).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  if (this->__isset.rs) {
    xfer += oprot->writeFieldBegin("rs", ::apache::thrift::protocol::T_I32, 4);
    xfer += oprot->writeI32((int32_t)this->rs);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.scanlines) {
    xfer += oprot->writeFieldBegin("scanlines", ::apache::thrift::protocol::T_LIST, 5);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_I32, static_cast<uint32_t>(this->scanlines.size()));
      std::vector<int32_t> ::const_iterator _iter86;
      for (_iter86 = this->scanlines.begin(); _iter86 != this->scanlines.end(); ++_iter86)
      {
        xfer += oprot->writeI32((*_iter86));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("width", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32(this->width);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("height", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->height);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Session &a, Session &b) {
  using ::std::swap;
  swap(a.cam, b.cam);
  swap(a.frames, b.frames);
  swap(a.tracks, b.tracks);
  swap(a.rs, b.rs);
  swap(a.scanlines, b.scanlines);
  swap(a.width, b.width);
  swap(a.height, b.height);
  swap(a.__isset, b.__isset);
}

Session::Session(const Session& other87) {
  cam = other87.cam;
  frames = other87.frames;
  tracks = other87.tracks;
  rs = other87.rs;
  scanlines = other87.scanlines;
  width = other87.width;
  height = other87.height;
  __isset = other87.__isset;
}
Session& Session::operator=(const Session& other88) {
  cam = other88.cam;
  frames = other88.frames;
  tracks = other88.tracks;
  rs = other88.rs;
  scanlines = other88.scanlines;
  width = other88.width;
  height = other88.height;
  __isset = other88.__isset;
  return *this;
}
void Session::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Session(";
  out << "cam=" << to_string(cam);
  out << ", " << "frames=" << to_string(frames);
  out << ", " << "tracks=" << to_string(tracks);
  out << ", " << "rs="; (__isset.rs ? (out << to_string(rs)) : (out << "<null>"));
  out << ", " << "scanlines="; (__isset.scanlines ? (out << to_string(scanlines)) : (out << "<null>"));
  out << ", " << "width=" << to_string(width);
  out << ", " << "height=" << to_string(height);
  out << ")";
}

}}} // namespace
