import React from 'react';
import { BrowserRouter, Route, Routes } from 'react-router-dom';
import Home from './Home';
import Adminheader from '../adminpanel/component/Adminheader';
import Contact from './Contact';
import Properties from './Properties';
import Property_details from './Property_details';
import LoginPage from '../adminpanel/component/Loginpage';

function Main() {
  return (
    <BrowserRouter>
      <Routes>
        <Route path="/" element={<Home />} />
        <Route path="/Contact" element={<Contact />} />
        <Route path="/Properties" element={<Properties />} />
        <Route path="/Property_details" element={<Property_details />} />
        <Route path="/Adminheader" element={<Adminheader />} />
        <Route path="/login" element={<LoginPage />} /> {/* Add this route */}
      </Routes>
    </BrowserRouter>
  );
}

export default Main;
